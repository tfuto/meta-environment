/**
 * This file is generated by /ufs/jurgenv/glt/bin/tifstoc. Do not edit!
 * Generated from tifs for tool 'asfe' (prefix='')
 * Headerfile generated at Thu Feb 13 19:35:03 2003
 */

#ifndef _ASFE_H
#define _ASFE_H

#include <atb-tool.h>

/* Prototypes for functions called from the event handler */
ATerm interpret(int conn, char *, ATerm, ATerm, ATerm);
void rec_ack_event(int conn, ATerm);
void rec_terminate(int conn, ATerm);
extern ATerm asfe_handler(int conn, ATerm term);
extern ATerm asfe_checker(int conn, ATerm sigs);

#endif
