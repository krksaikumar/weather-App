#include<stdio.h>
int main(){
    int arr[20],n,i,j,temp;
    printf("Enter array size:");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Before sorting array elements are:\n");
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nAfter sorting array elements are:\n");
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
    return 0;
}


