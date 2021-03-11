#include<stdio.h>
int main(){
    float length, width, area, perimeter;
    printf("Enter the length and width of the rectangle : ");
    scanf("%f%f",&length,&width);
    area = length*width;
    perimeter = 2*(length+width);
    printf("Area of rectangle : %f square inches\n",area);
    printf("Perimeter of rectangle : %f inches\n",perimeter);
    return 0;
}
