//Маньковская Е.В. 313ИС
//Являются ли стороны треугольником
#include <stdio.h>
int is_triangle(int a,int b, int c){
	if (a<b+c && b<a+c && c<b+a) return 1;
	else return 0;
}	
int main(void){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int result = is_triangle(a,b,c);
	printf("%d", result);
	return 0;
}

