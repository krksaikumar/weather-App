#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, *eles, i, sum=0;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    eles = (int*)malloc(sizeof(int)*n);
    printf("Enter %d elements : ",n);
    for(i=0;i<n;i++)
        scanf("%d",&eles[i]);
    for(i=0;i<n;i++)
        sum = sum + eles[i];
    printf("Sum of all elements is : %d\n",sum);
    return 0;
}


