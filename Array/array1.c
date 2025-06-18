//Маньковская Е.В. 313С
//Cумма части массива
#include <stdio.h>
#define N 10
int main(){
	int arr[N];
	int i;
	int n,k;
	int sum = 0;
	for (i = 0; i < 10; i++)
		scanf("%d", &arr[i]);
	scanf("%d %d", &k, &n);
	for (i=k;i<n;i++)
		sum = sum + arr[i];
	printf("%d",  sum);
	return 0;
}
