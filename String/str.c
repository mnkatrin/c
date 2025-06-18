//Маньковская Е.В.
//Вводится N строк, напечатать самую длинную
#include <stdio.h>
#include <string.h>
#define LIT 1000
int main(){
	int n;
	scanf("%d", &n);
	char arr[LIT] = "";
	int len, max_len = 0;
	char res[LIT] = "";
	for (int i = 0;i<=n;i++){
		fgets(arr,LIT,stdin);
		len = strlen(arr);
		if (len>max_len){
			max_len = len;
			strcpy(res,arr);
		}
	}
	printf("%s",res);
	return 0;
}
