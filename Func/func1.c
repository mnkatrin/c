//Маньковская Е.В. 313ИС
//Вычисление факториала
#include <stdio.h>
int fact(int n){
	int a = 1;
	if (n==0) return 1;
	else if (n<0) return -1;
	for (int i = 1; i<=n;i++) {
		a=a*i;
	}
	return a;
}
int main(void)
{
	printf("%d",fact(6));
	return 0;
}
