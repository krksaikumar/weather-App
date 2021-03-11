#include <stdio.h> 
int search(int a[], int first, int last, int s) 
{ 
            int middle = (first+last)/2;
            if(s==a[middle])
            return middle;
            else if(s>a[middle])
            search(a,middle + 1,last,s);    
            else if(s<a[middle])
            search(a,first,middle - 1,s);
            else
            return -1;  
} 
int main() 
{ 
            int a[100],n,i,j,s;
            printf("Enter Number of Elements in Array:\n");
            scanf("%d", &n);
            printf("Enter numbers in  ascending order:\n");
            for(i = 0; i < n; i++)
            scanf("%d",&a[i]);
            printf("Enter a number to search in  Array:\n");
            scanf("%d", &s);
            j = search(a, 0, n-1, s); 
            if(j == -1)
            printf("Element is not present in array");
            else
            printf("Element is present at index %d", j); 
            return 0; 
}
