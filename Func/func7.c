//Маньковская Е.В. 313ИС
//Вывод чётных чисел
#include <stdio.h>
int is_even(int a){
	if (a%2 == 0) return 1;
	else return 0;
}
int main(void)
{
	int x;
	while(scanf("%d", &x) == 1) {
		if (is_even(x) == 1)
		printf("%d ",x);
	}
	return 0;
}
