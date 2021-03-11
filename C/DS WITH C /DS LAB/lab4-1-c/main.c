#include<stdio.h>
int main(){
    int n,i=1,c=1,sum=0;
    printf("Enter number of terms : ");
    scanf("%d",&n);
    printf("Even natural numbers are : \n");
    while(c<=n){
        if(i%2==0){
            printf("%d ",i);
            sum=sum+i;
            c++;
        }
        i++;
    }
    printf("\nSum of even natural numbers is: %d\n",sum);
    return 0;
}
