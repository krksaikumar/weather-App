#include<stdio.h>
int main()
{
          int n,temp,i,j,a[20];
          printf("Enter total numbers of elements:\n");
          scanf("%d",&n);
          printf("Enter elements:\n");
          for(i=0;i<n;i++)
          scanf("%d",&a[i]);
          for(i=0;i<n;i++)
          {
                  for(j=0;j<n-1;j++)
                  {
                          if(a[j]>a[j+1])
                          {
                                   temp=a[j];
                                   a[j]=a[j+1];
                                   a[j+1]=temp;
                          }
                  }
          }
          printf("After sorting elements are:\n");
          for(i=0;i<n;i++)
          printf(" %d",a[i]);
          return 0;
 }  
