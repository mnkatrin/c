#include <stdio.h>
#include <string.h>
int main() {
	int a,s;
	scanf("%d %d", &a, &s);
	for (int i = 0;i < s;++i){
		printf("*");
	}
	printf("\n");
	for (int i = 1; i < a-1; ++i){
		for (int j = 0;j<s;++j){
			if (j == 0 || j == s-1){
			printf("*");
			}
			else printf("-");
			}
		printf("\n");
	}
	for (int i = 0; i < s;++i){
		printf("*");
	}
}
