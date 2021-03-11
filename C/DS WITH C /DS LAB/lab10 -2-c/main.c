#include<stdio.h>
#include<stdlib.h>
int main(){
    int *num1, *num2;
    num1 = (int*)malloc(sizeof(int));
    num2 = (int*)malloc(sizeof(int));
    printf("Enter two numbers : ");
    scanf("%d%d",num1,num2);
    printf("Sum of %d and %d is %d\n",*num1,*num2,*num1+*num2);
    return 0;
}


