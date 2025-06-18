/*Необходимо вывести  строку yes, 
если символ является цифрой, 
и строку no в противном случае.*/
#include <stdio.h>
#include <ctype.h>

int main() {
	char c;
	scanf("%c",&c);
	if (isdigit(c)) printf ("yes");
	else printf("no");
	return 0;
}
