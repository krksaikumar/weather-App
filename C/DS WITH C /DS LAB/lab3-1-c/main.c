
#include<stdio.h>
#include<stdlib.h>
int main(){
    long int l;
    char str[30];
    printf("Enter a string:\n");
    scanf("%s",str);
    l=atol(str);
    printf("String to long integer is : %ld",l);
    return 0;
}

