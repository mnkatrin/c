//Маньковская Е.В. 313ИС
//Поиск объёма
#include <stdio.h>
int get_volume(int h,int w,int d){
	int res = h*w*d;
	return res;
}

int main(void)
{
	int h,w,d;
	scanf("%d %d %d",&h,&w,&d);
	int result = get_volume(h,w,d);
	printf("%d", result);
	return 0;
}
