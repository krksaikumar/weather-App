#include<stdio.h>
int main()
{
         int n,a[30],key,i,j;
         printf("Enter total elements:\n");
         scanf("%d",&n);
         printf("Enter elements:\n");
         for(i=0;i<n;i++)
         scanf("%d",&a[i]);
         for(i=1;i<n;i++)
         {
                   j=i;
                   while(j>0 && a[j]<a[j-1])
                   {
                          temp=a[j];
                          a[j]=a[j-1];
                          a[j-1]=temp;
                          j--;
                   }
         } 
         printf("After sorting is:\n");
         for(i=0;i<n;i++)
         printf(" %d",a[i]);
         return 0;
}
