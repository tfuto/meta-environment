/*{{{  includes */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <MEPT-utils.h>

/*}}}  */

/*{{{  static void make_header(FILE *file, const char* compiler_version) */

static void make_header(FILE *file, const char* compiler_version)
{
  ATfprintf(file, 
    "/* This C code is generated by the asf compiler version %s */\n\n",
     compiler_version);
}

/*}}}  */
/*{{{  static void make_main(const char *name, FILE *file) */

static void make_main(const char *name, FILE *file)
{
  ATfprintf(file,
	    "#ifdef ASF_MAIN                                           \n"
	    "int main(int argc, char *argv[])                         \n"
	    "{                                                        \n"
	    "  return asc_support_main(argc, argv,                    \n"
	    "                          register_%s,                   \n"
            "                          resolve_%s,                    \n"
	    "                          init_%s);                      \n"
	    "}                                                        \n"
	    "#endif                                                   \n\n",
	    name, name, name); 
}

/*}}}  */

/*{{{  void ToC_code(name, ptCcode, file, version) */

void ToC_code(const char *name, PT_ParseTree ptCcode, FILE *file, 
	      const char* compiler_version)
{
  int c, prev = ' ';
  int instring = 0;
  int escaped = 0;
  int firststring = 1;
  static char *buf = NULL;
  char *bp;
  int size3 = 0, size;

  make_header(file, compiler_version);

  buf = PT_yieldParseTree(ptCcode);
  size = strlen(buf);

  bp = buf;
  do {
    size3++;
    c = *bp++;
    if ((bp-buf) >= size) {
      fprintf(stderr, "could not find '#' marker, "
              "maybe the reduction failed?\n");
      exit (1);
    }
  } while(c != '#');

  while(c != '"') {
    fputc(c, file);
    size3++;
    c = *bp++;
  }
  fputc(' ', file);
  fputc(c, file);
  size3++;    
  c = *bp++;

  while(c != '"') {
    fputc(c, file);
    size3++;
    c = *bp++;
  }
  fputs("\"\n", file);

  do {
    size3++;
    c = *bp++;
    if(c >= 0) {
      if(!instring && c == '\n')
        c = ' ';
      if(!(instring || prev != ' ' || c != ' '))
        ;
      else  
        fputc(c, file);
      prev = c;
    }
    if(instring) {
      if(!escaped && c == '"') {
        instring = 0;
        if(firststring) {
          firststring = 0;
          fputc('\n', file);
        }
      }
      escaped = 0;
      if(!escaped && c == '\\')
        escaped = 1;
    } else {
      if(c == '"')
        instring = 1;
      else {   
        if(c == ';' || c == '}' || c == '{') {
          fputc('\n', file);
          prev = ' ';
        }
      }
    }
  } while(size3 != size);

  make_main(name, file);
}        

/*}}}  */
