/**
 * This file is generated by tifstoc. Do not edit!
 * Generated from tifs for tool 'toolbus-adapter' (prefix='')
 */

#ifndef _TOOLBUS_ADAPTER_H
#define _TOOLBUS_ADAPTER_H

#include <atb-tool.h>

/* Prototypes for functions called from the event handler */
ATerm toolbus_snd_msg(int conn, int, ATerm);
void toolbus_stop(int conn, int);
ATerm toolbus_get_location(int conn, int);
ATerm toolbus_start(int conn, const char *, ATerm);
ATerm toolbus_get_instances(int conn);
void rec_ack_event(int conn, ATerm);
void rec_terminate(int conn, ATerm);
extern ATerm toolbus_adapter_handler(int conn, ATerm term);
extern ATerm toolbus_adapter_checker(int conn, ATerm sigs);

#endif
