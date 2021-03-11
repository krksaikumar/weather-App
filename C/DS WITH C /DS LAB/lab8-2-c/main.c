#include<stdio.h>
int main(){
    char str1[30],str2[30];
    int i;
    printf("Enter string:\n");
    gets(str1);
    for(i=0;str1[i]!='\0';i++)
        str2[i]=str1[i];
    str2[i]='\0';
    printf("Copied string is:\n");
    puts(str2);
}

