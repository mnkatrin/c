//Маньковская Е.В. 313ИС
//Возведение числа в степень
#include <stdio.h>
#include <math.h>
int pow_n(int n,int m){
	int res;
	if (m == 0) res = 1;
	else res = pow(n,m);
	return res;    
}
int main(void)
{
	printf("%d", pow_n(-5,3));
	return 0;
}
