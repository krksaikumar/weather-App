#include<stdio.h>
int main()
{
         int n,i,j,temp,a[20],min;
         printf("Enter total elements:\n");
         scanf("%d",&n);
         printf("Enter elements:\n");
         for(i=0;i<n;i++)
         scanf("%d",&a[i]);
         for(i=0;i<n;i++)
         {
                  min=i;
                  for(j=i+1;j<n;j++)
                  {
                           if(a[j] < a[min])
                           min=j;
                  }
                  temp=a[i];
                  a[i]=a[min];
                  a[min]=temp;
         }
         printf("After sorting is:\n");
         for(i=0;i<n;i++)
         printf(" %d",a[i]);
         return 0;
}

