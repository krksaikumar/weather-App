#include<stdio.h>
int main(){
 int i;
 short int si;
 long int li;
 float f;
 double d;
 long double ld;
 char c;
 printf("Enter int, short int and long int values : ");
 scanf("%d%hd%ld",&i,&si,&li);
 printf("Enter float, double and long double values : ");
 scanf("%f%lf%Lf",&f,&d,&ld);
 printf("Enter a character : ");
 scanf(" %c",&c);
 printf("Given int value : %d\n",i);
 printf("Given short int value : %hd\n",si);
 printf("Given long int value : %ld\n",li);
 printf("Given float value : %f\n",f);
 printf("Given double value : %lf\n",d);
 printf("Given long double value : %Lf\n",ld);
 printf("Given character : %c\n",c);
 return 0;
}


