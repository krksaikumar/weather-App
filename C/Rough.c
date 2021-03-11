#include<stdio.h>
int main(){
	char t[999];
	int i = 0;
	int chars = 0, sens = 0, words = 0;
	printf("enter your text\n");
	gets(t);
	while(t[i] != '\0'){
		if(t[i] == ' ') words++;
		if(t[i] == '.') sens++;
		i++;
	}
	chars = i;
	if(chars > 1) words += 1;
	if(words > 1) sens += 1;
	
	printf("no. of chars = %d\nno. of words = %d\nno. of sens = %d\n", chars, words, sens);
}