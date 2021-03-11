#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, *eles, i, largest;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    eles = (int*)malloc(sizeof(int)*n);
    printf("Enter %d elements : ",n);
    for(i=0;i<n;i++)
        scanf("%d",&eles[i]);
    largest = eles[0];
    for(i=0;i<n;i++){
        if(largest<eles[i])
            largest = eles[i];
    }
    printf("Largest element is : %d\n",largest);
    return 0;
}




