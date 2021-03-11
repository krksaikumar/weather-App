#include <stdio.h>
int large(int[], int);
int main() {
 int a[10], i, n;
 printf("Enter number of elements to be insert : ");
 scanf("%d", &n);
 printf("Enter %d elements : ",n);
 for (i = 0; i < n; i++)
  scanf("%d", &a[i]);
 printf("The largest element of the array = %d\n", large(a, n));
 return 0;
}
int large(int ary[], int n){
 int i, max;
 max=ary[0];
 for(i=1;i<n;i++){
  if(ary[i]>max)
   max=ary[i];
 }
 return max;
}









