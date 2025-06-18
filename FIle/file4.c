//Маньковская Е.В. 313ИС-22
//«Склеить» все строки файла через строку-разделитель
#include <stdio.h>
#include <string.h>
#define N 2000
int main() {
	FILE *input = fopen("hello.txt", "r");
	char arr[N];
	char a[] = "; ";
	char new_arr[N] = "";
	while(fgets(arr, N, input) != NULL) {
		arr[strcspn(arr,"\n")] = '\0';
		if (new_arr[0] != '\0') strcat(new_arr, a);
		strcat(new_arr,arr);
	}
	printf("%s", new_arr);
	fclose(input);
}
