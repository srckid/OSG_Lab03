#ifndef Func_H_   /* Include guard */
#define Func_H_

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int system(const char *command);
void cont();
void current_dir();
void list_file();
void check_file();
void cpu_info();
void disk_usage();
void count_current_dir();

#endif // Func_H_
