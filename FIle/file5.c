//Маньковская Е.В.
/*В файле “in.txt” содержится текст на английском языке, 
слова разделены пробелами. В файле “word.txt” содержится искомое слово. 
Выдать все строки файла in.txt, содержащие слово из word.txt*/
#include <stdio.h>
#include <string.h>
#define N 200
int main() {
	FILE *input = fopen("in.txt","r");
	FILE *output = fopen("word.txt","r");
	char arr[N];
	char word[N];
	while(fgets(arr,N,input)!= NULL){
		fscanf(output,"%s",word);
		if (strstr(arr,word)){
			printf("%s",arr);
		}
	}
	fclose(input);
	fclose(output);
}
