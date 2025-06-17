//Маньковская Е.В. 313ИС-22
//Максимальная длина строки в файле
#include  <stdio.h>
#include <string.h>
#define N 100
int main() {
	FILE *myfile = fopen("hello.txt", "r");
	char arr[N];
	int a;
	int max = 0;
	while (fgets(arr, N, myfile) != NULL) {
		printf("%s", arr);
		a = strlen(arr);
		if (a>max) max = a;
	}
	printf("%d", max-1);
}
