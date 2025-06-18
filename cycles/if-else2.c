/*Измените регистр символа, 
если он был латинской буквой: сделайте его заглавным, 
если он был строчной буквой и наоборот. 
Любой другой символ выведите как есть, ничего не меняя.*/
#include <stdio.h>
#include <ctype.h>

int main() {
	char c;
	scanf("%c", &c);
	if (islower(c))  printf("%c", toupper(c));
	else if (isupper(c)) printf("%c",tolower(c));
	return 0;
}
