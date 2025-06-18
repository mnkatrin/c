//Маньковская Е.В. 313ИС
//Среднее арифмитическое двух чисел
#include <stdio.h>
float get_mean2(int a, int b){
	float res = (a+b)/2.0;
	return res;
}
int main(void){
	int a,b;
	scanf("%d %d", &a, &b);
	float num = get_mean2(a,b);
	printf("%.2f",num);
	return 0;
}

