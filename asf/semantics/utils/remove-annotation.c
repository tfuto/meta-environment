/*

    SGLR - the Scannerless Generalized LR parser.
    Copyright (C) 2000  Stichting Mathematisch Centrum, Amsterdam, The Netherlands.

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA

*/
/*
 * $Id$
 */

#include <stdio.h>
#include <aterm1.h>
#include <aterm2.h>
#include <stdlib.h>
#include <unistd.h>

static char myname[]    = "remove-annotation";
static char myversion[] = "1.1";
static char myarguments[] = "a:bhi:o:tV";
 

ATerm RemoveAnnotation(ATerm tree, ATerm anno_label)
{
  switch(ATgetType(tree)) {
  case AT_APPL:
    {
      AFun fun = ATgetAFun((ATermAppl) tree);
      ATerm annos = AT_getAnnotations(tree);
      int i;

      for(i = 0; i < ATgetArity(fun); i++) {
        ATerm arg = ATgetArgument((ATermAppl) tree, i);
        arg = RemoveAnnotation(arg, anno_label);
        tree = (ATerm) ATsetArgument((ATermAppl) tree, arg, i);
      }

      if(annos) {
        tree = AT_setAnnotations(tree, annos);
      }

      tree = ATremoveAnnotation(tree, anno_label);
    }
    break;
  case AT_LIST:
    {
      ATermList list = (ATermList) tree;
      ATermList newlist;
      ATerm annos = AT_getAnnotations(tree);

      for(newlist = ATempty; !ATisEmpty(list); list = ATgetNext(list)) {
        newlist = ATinsert(newlist,
                           RemoveAnnotation(ATgetFirst(list), anno_label));
      }

      tree = (ATerm) ATreverse(newlist);
      
      if(annos) {
        tree = AT_setAnnotations(tree, annos);
      }

      tree = ATremoveAnnotation(tree, anno_label);
    }
    break;
  default:
    tree = ATremoveAnnotation(tree, anno_label);
    break;
  }

  return tree;
}

/*
    Usage: displays helpful usage information
 */
void usage(void)
{
    fprintf(stderr,
        "Usage: remove-annotation -a <label> -bh -i <file> -o <file> -tV . . .\n"
        "Options:\n"
        "\t-a              label of annotation to remove\n"
        "\t-b              binary output mode (default)\n"
        "\t-h              display help information (usage)\n"
        "\t-i filename     input from file (default stdin)\n"
        "\t-o filename     output to file (default stdout)\n"
        "\t-t              text output mode\n"
        "\t-V              reveal program version (i.e. %s)\n",
        myversion);
}

int main (int argc, char **argv)
{
  int c; /* option character */
  ATerm bottomOfStack;
  ATerm t;
  ATbool txtout = ATfalse;
  char  *ATlibArgv[] = { "", "-silent"};
  char *annotation = "";
  char   *input_file_name  = "-";
  char   *output_file_name = "-";
 
  if(argc == 1) { /* no arguments */
    usage();
    exit(1);
  }

  while ((c = getopt(argc, argv, myarguments)) != EOF)
    switch (c) {
    case 'a':  annotation = optarg;      break;    
    case 'h':  usage();                      exit(0);
    case 'i':  input_file_name  = optarg;    break;
    case 'o':  output_file_name = optarg;    break;
      
    case 'b':  txtout = ATfalse;             break;
    case 't':  txtout = ATtrue;              break;
    case 'v':                                break;
    case 'V':  fprintf(stdout, "%s %s\n", myname, myversion);
      exit(0);
    default :  usage();                      exit(1);
    }
 
  ATinit(2, ATlibArgv, &bottomOfStack);    /* Initialize Aterm library */
  
  t = ATreadFromNamedFile(input_file_name);
  if(!t) {
    ATerror("%s: could not read term from input file %s\n", myname, input_file_name);
  }

  if(!annotation || !strcmp(annotation, "")) {
    usage();
    exit(1);
  } else {
    t = RemoveAnnotation(t, ATparse(annotation));
  }

  if(txtout) {
    ATwriteToNamedTextFile(t, output_file_name);
  } else {
    ATwriteToNamedBinaryFile(t, output_file_name);
  }

  return 0;
}
