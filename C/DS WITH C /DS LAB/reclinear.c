#include<stdio.h> 
int search(int a[], int n, int s) 
{ 
          if (n < 0) 
          return -1; 
          else if (a[n] == s) 
          return n; 
          else
          return search(a, n-1, s); 
} 
int main() 
{ 
          int a[100],n,i,j,s;
          printf("Enter Number of Elements  in Array:\n");
          scanf("%d", &n);
          printf("Enter numbers:\n");
          for(i = 0; i < n; i++)
          scanf("%d",&a[i]); 
          printf("Enter a number to search in Array:\n");
          scanf("%d", &s);
          j = search(a, n-1, s); 
          if (j == -1)
          printf("Element is not present"); 
          else
          printf("Element is present at index %d",j); 
          return 0; 
} 
