//Маньковская Е.В. 313ИС
//Вывод точек, которые не входят в диапазон
#include <stdio.h>
int is_range(double x, double a, double b){
	if (x>a && x<b) return 1;
	else return 0;
}
int main(void)
{
	double x;
	while(scanf("%lf", &x) == 1) {
		if (is_range(x,-2.5,3.5) == 0)
			printf("%.1f ",x);
	}
	return 0;
}
