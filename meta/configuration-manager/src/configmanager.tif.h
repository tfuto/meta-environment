/**
 * This file is generated by /ufs/jurgenv/glt/bin/tifstoc. Do not edit!
 * Generated from tifs for tool 'configmanager' (prefix='')
 * Headerfile generated at Sat Apr 26 15:58:18 2003
 */

#ifndef _CONFIGMANAGER_H
#define _CONFIGMANAGER_H

#include <atb-tool.h>

/* Prototypes for functions called from the event handler */
ATerm process_config_file(int conn, char *, char *);
ATerm get_button_names(int conn, char *, char *);
ATerm process_button_file(int conn, char *, ATerm);
ATerm get_button_actions(int conn, ATerm, char *, char *);
void rec_terminate(int conn, ATerm);
extern ATerm configmanager_handler(int conn, ATerm term);
extern ATerm configmanager_checker(int conn, ATerm sigs);

#endif
