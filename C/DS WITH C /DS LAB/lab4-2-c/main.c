#include<stdio.h>
int main(){
    int n,i;
    float sum=0;
    printf("Enter range:");
    scanf("%d",&n);
    printf("Series is:\n");
    for(i=1;i<=n;i++){
        printf("1/%d",i);
        if(i<n)
            printf("+");
        sum = sum + (float)1/i;
    }
    printf("\nSum of series is: %f",sum);
    return 0;
}
