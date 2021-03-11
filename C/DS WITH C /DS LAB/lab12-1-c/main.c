#include<stdio.h>
void swap(int* a, int* b);
int main() {
 int num1, num2;
 printf("Enter two integer values : ");
 scanf("%d %d", &num1, &num2);
 printf("Before swapping in main : num1 = %d \t num2 = %d\n", num1, num2);
 swap(&num1, &num2);
 printf("After swapping in main : num1 = %d \t num2 = %d\n", num1, num2);
 return 0;
}

void swap(int *num1, int *num2){
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    printf("After swapping in swap : *num1 = %d \t *num2 = %d\n", *num1, *num2);
}





