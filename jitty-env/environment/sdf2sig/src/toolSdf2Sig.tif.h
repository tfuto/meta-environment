/**
 * This file is generated by /ufs/jurgenv/glt/bin/tifstoc. Do not edit!
 * Generated from tifs for tool 'toolSdf2Sig' (prefix='')
 * Headerfile generated at Wed Jan  8 16:45:56 2003
 */

#ifndef _TOOLSDF2SIG_H
#define _TOOLSDF2SIG_H

#include <atb-tool.h>

/* Prototypes for functions called from the event handler */
ATerm rewrite(int conn, ATerm);
ATerm apply_rewrite(int conn, char *, char *, ATerm);
void rec_terminate(int conn, ATerm);
extern ATerm toolSdf2Sig_handler(int conn, ATerm term);
extern ATerm toolSdf2Sig_checker(int conn, ATerm sigs);

#endif
