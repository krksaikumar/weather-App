#include<stdio.h>
int main(){
    int arr[30],evenArr[30],oddArr[30],i,j=0,k=0,ea=0,oa=0,n;
    printf("Enter array size:");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        if(arr[i]%2==0)
            evenArr[j++]=arr[i];
        else
            oddArr[k++]=arr[i];
    }
    printf("Even elements in the array:\n");
    for(i=0;i<j;i++)
        printf("%d\t",evenArr[i]);
    printf("\nOdd elements in the array:\n");
    for(i=0;i<k;i++)
        printf("%d\t",oddArr[i]);
    return 0;
}






