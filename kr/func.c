#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "func.h"
#include "info.h"

void show_menu() {
	printf(
		"\n"
		"0. Выход\n"
		"1. О программе\n"
		"2. Загрузка из файла\n"
		"3. Печать списка\n"
		"4. Выполнение запроса\n");
}

int load(char *file_name, Information info[], int limit){
	FILE *in = fopen(file_name,"r");
	int count = 0;
	while(count<limit && fscanf(in,"%s %s %s %d",
		info[count].specification,
		info[count].name,
		info[count].designation,
		&info[count].position) == 4){
		count++;
	}
	fclose(in);
	return count;
}

void rec_to_s(char s[], Information info) {
	char format[] = "%s %s %s %d";
	sprintf(s, format, info.specification, info.name,info.designation,info.position);
}

void echo_print(Information info[], int limit) {
	for (int i = 0; i < limit; i = i + 1) {
		char s[100] = ""; 
		rec_to_s(s, info[i]);
		puts(s);
	}
}

void number_of_entries(Information  info[],int limit,char *file_name){
	FILE *out = fopen(file_name,"w");
	for (int i = 0; i < limit; i++) {
		int counted = 0;
		for (int j = 0; j < i; j++) {
			if (strcmp(info[j].specification, info[i].specification) == 0) {
				counted = 1;
				break;}
		}
		if (!counted) {
			int count = 1;
			for (int j = i + 1; j < limit; j++) {
				if (strcmp(info[i].specification, info[j].specification) == 0) {
					count++;}
			}
			fprintf(out, "%s %d\n", info[i].specification, count);
		}
	}
	fclose(out);
}

