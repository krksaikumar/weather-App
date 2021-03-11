#include<stdio.h>
void isPrime(int);
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    isPrime(n);
    return 0;
}
void isPrime(int n){
    int i, c=0;
    for(i=1;i<=n/2;i++){
        if(n%i==0)
            c++;
    }
    if(c==1)
        printf("Given number %d is a prime number.\n",n);
    else
        printf("Given number %d is not a prime number.\n",n);
}








