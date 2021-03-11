#include<stdio.h>
#include<stdlib.h>
int main(){
 float radius, length, width, base, height, area;
 int choice;
 do{
  printf("1. Area of circle\n2. Area of rectangle\n3. Area of triangle\n4. Exit\n");
  printf("Enter your choice : ");
  scanf("%d",&choice);
  switch(choice){
   case 1:
    printf("Enter radius : ");
    scanf("%f",&radius);
    area = 3.14 * radius * radius;
    printf("Area of circle : %f\n",area);
    break;
   case 2:
    printf("Enter length and width : ");
    scanf("%f%f",&length,&width);
    area = length * width;
    printf("Area of rectangle : %f\n",area);
    break;
   case 3:
    printf("Enter base and height : ");
    scanf("%f%f",&base,&height);
    area = (base*height)/2;
    printf("Area of triangle : %f\n",area);
    break;
   case 4:
    exit(0);
  }
 } while(1);
 return 0;
}
