//Маньковская Е.В. 313ИС-22
//Подсчитать количество слов в файле
#include <stdio.h>
#define N 200
int main() {
	FILE *input = fopen("hello.txt","r");
	char arr[N];
	int a = 0;
	while (fgets(arr,N,input) != NULL) {
		for (int i = 0;arr[i] != '\0';++i){	
			if (arr[i] == ' ' && arr[i] == arr[i-1]) {}
			else if (arr[i] == ' ' || arr[i] == '\n') {++a;}
		}
	}
	fclose(input);
	printf("%d", a);
}
