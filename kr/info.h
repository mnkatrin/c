#ifndef FUNC_H_INCLUDED
#define FUNC_H_INCLUDED
#include "info.h"

void show_menu();
int load(char *file_name, Information info[], int limit);
void rec_to_s(char s[], Information info);
void echo_print(Information info[], int limit);
void number_of_entries(Information info[], int limit,char *file_name);


#endif 
