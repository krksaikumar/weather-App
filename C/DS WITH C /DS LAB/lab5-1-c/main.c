#include<stdio.h>
int main(){
    int a[20],n,i,j,k;
    printf("Enter array size:");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                for(k=j;k<n-1;k++)
                    a[k]=a[k+1];
                n--;
                j--;
            }
        }
    }
    printf("\nUnique elements in array are:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}

