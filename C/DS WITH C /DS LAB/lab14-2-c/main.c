#include <stdio.h>
long decimalToBinary(int);
int main() {
 int d;
 long int b;
 printf("Enter a positive decimal number : ");
 scanf("%d", &d);
 b=decimalToBinary(d);
 printf("The binary number of decimal %d is : %ld\n", d, b);
 return 0;
}
long decimalToBinary(int d){
 long int bn=0, revbn=0;
 int c=0;
 while(d>0){
  revbn=(revbn*10)+(d%2);
  d=d/2;
  c++;
 }
 while(c>0){
  bn=(bn*10)+(revbn%2);
  revbn=revbn/10;
  c--;
 }
 return bn;
}











