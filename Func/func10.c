//Маньковская Е.В. 313ИС
//Среднее арифмитическое N чисел
#include <stdio.h>
double get_qm(double qm_1, int m, int x){
	return (((m-1)/(m*1.0))*(qm_1))+((1/(m*1.0))*x);
}
int main(void)
{
	int x;
	int m = 1;
	double qm;
	double qm_1 = 0.0;
	
	while(scanf("%d", &x) == 1) {
		qm = get_qm(qm_1,m,x);
		qm_1 = qm;
		++m;
	}
	printf("%.3f",qm_1);
	return 0;
}
