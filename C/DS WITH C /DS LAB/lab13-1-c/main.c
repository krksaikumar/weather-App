#include<stdio.h>
int* findLarger(int*, int*);
int main()
 {
 int num1, num2;
 int *result;
 printf("Enter two numbers : ");
 scanf("%d %d", &num1, &num2);
 result = findLarger(&num1, &num2);
 printf("Largest number : %d\n" , *result);
 return 0;
}

int* findLarger(int *num1, int *num2)
{
 return *num1>*num2?num1:num2;
}

