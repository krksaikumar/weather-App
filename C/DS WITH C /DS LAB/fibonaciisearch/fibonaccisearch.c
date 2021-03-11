#include <stdio.h> 
int min(int x, int y) 
{ 
        return (x<=y)? x : y; 
} 
int search(int arr[], int x, int n) 
{ 
        int a = 0;           //it rep fib no’s 0,1,1
        int b = 1;            
        int c = a + b;
        while (c < n) 
        { 
                 a = b;          //find c=13
                 b = c; 
                 c  = a + b; 
        } 
        int offset = -1; 
        while (c > 1) 
        {
                 // minimum is obtained by sending fn
                 int i = min(offset+a, n-1); 
                 if (x > arr [i]) 
                 { 
                           c  = b; 
                           b = a; 
                           a = c - b; 
                           offset = i; 
                 } 
                 else if (x < arr[i]) 
                 { 
                           c  = a; 
                           b = b - a; 
                           a = c - b; 
                 } 
                 else return i; 
        } 
        return -1; 
} 
int main() 
{ 
       int arr[] = {10, 22, 35, 40, 45, 50, 80, 82, 85, 90, 100}; 
       int n = sizeof(arr)/sizeof(arr[0]); 
       int x,s;
       printf("Enter an element to search:\n");
       scanf("%d",&x);
       s=search(arr, x, n);
       if(s==-1)
       printf("Element is not found");
       else
       printf("Element is Found at index: %d", s+1); 
       return 0; 
} 

