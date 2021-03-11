#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int i,len;
    printf("Enter string:\n");
    gets(str);
    len = strlen(str);
    printf("String in reverse order:\n");
    for(i=len-1;i>=0;i--)
        printf("%c",str[i]);
    return 0;
}
