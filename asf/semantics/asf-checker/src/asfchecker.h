/**
 * This file is generated by tifstoc. Do not edit!
 * Generated from tifs for tool 'asfchecker' (prefix='')
 */

#ifndef _ASFCHECKER_H
#define _ASFCHECKER_H

#include <atb-tool.h>

/* Prototypes for functions called from the event handler */
ATerm check_asf(int conn, ATerm);
void rec_terminate(int conn, ATerm);
extern ATerm asfchecker_handler(int conn, ATerm term);
extern ATerm asfchecker_checker(int conn, ATerm sigs);

#endif
