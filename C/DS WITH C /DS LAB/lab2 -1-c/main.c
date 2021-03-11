#include<stdio.h>
#include<math.h>
int main(){
 float x1,x2,y1,y2,dist;
 printf("Enter x1 and x2 : ");
 scanf("%f%f",&x1,&x2);
 printf("Enter y1 and y2 : ");
 scanf("%f%f",&y1,&y2);
 dist = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
 printf("Distance between two points : %f\n",dist);
 return 0;
}

