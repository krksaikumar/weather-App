#include<stdio.h>
int main() {
 int num1, *p1;
 float num2, *p2;
 char ch1, *p3;
 printf("Enter int, float and char values : ");
 scanf("%d %f %c",&num1, &num2, &ch1 );
 p1=&num1;
 p2=&num2;
 p3=&ch1;
 printf("Given int value : %d\n", *p1);
 printf("Given float value : %f\n", *p2);
 printf("Given char value : %c\n", *p3);
    return 0;
}


