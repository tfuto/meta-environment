#ifndef MODULE_TABLE_H
#define MODULE_TABLE_H

#include <aterm2.h>
#include <SDFME.h>

typedef ATermTable ModuleTable;

ModuleTable MT_createModuleTable();
void MT_destroyModuleTable(ModuleTable table);
void MT_putModule(ModuleTable table, SDF_ModuleId moduleName,
		  SDF_Module module);
SDF_Module MT_getModule(ModuleTable table, SDF_ModuleId moduleName);

#endif
