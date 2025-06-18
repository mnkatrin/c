//Маньковская Е.В. 313ИС
//Поиск длины радиуса-вектора
#include <stdio.h>
#include <math.h>
double get_length(int a, int b){
	return sqrt((a*a)+(b*b));
}
int main(void)
{
	int a,b;
	scanf("%d %d", &a,&b);
	printf("%.2f", get_length(a,b));
	return 0;
}
