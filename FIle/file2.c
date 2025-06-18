//Маньковская Е.В. 313ИС-22
/*Каждую строку во входном файле сохранить в выходной файл в
обратном порядке*/
#include <stdio.h>
#define N 200
int main() {
	FILE *input = fopen("hello.txt","r");
	FILE *output = fopen("output.txt","w");
	char arr[N];
	while (fgets(arr,N,input)) {
		int i;
		for (i = 0; arr[i]!='\0' && arr[i] != '\n'; i++) {}
		while (i > 0) {
			i--;
			fputc(arr[i], output);
		}
		fputc('\n', output);
	}
	fclose(input);
	fclose(output);
}
