/**
 * This file is generated by tifstoc. Do not edit!
 * Generated from tifs for tool 'unparser' (prefix='')
 */

#ifndef _UNPARSER_H
#define _UNPARSER_H

#include <atb-tool.h>

/* Prototypes for functions called from the event handler */
void rec_terminate(int conn, ATerm);
ATerm unparse_asfix(int conn, ATerm);
extern ATerm unparser_handler(int conn, ATerm term);
extern ATerm unparser_checker(int conn, ATerm sigs);

#endif
