  #include <stdio.h>
int main()
{
         int i, first, last, middle, n, s, a[100];
         printf("Enter number of elements:\n");
         scanf("%d",&n); 
         printf("Enter elements in ascending order:\n");
         for (i = 0; i < n; i++)
         scanf("%d",&a[i]); 
         printf("Enter an element to search:\n");
         scanf("%d", &s);
         first = 0;
         last = n - 1;
         middle = (first+last)/2;
         while (first <= last)
         {
                   if(s==a[middle])
                   {
                              printf("Element is found at index: %d",middle);
                              break;
                   }
                   else if(s>a[middle])
                   first = middle + 1;    
                   else if(s<a[middle])
                   last = middle - 1;
                   middle = (first + last)/2;
         }
         if (first > last)
         printf("Element is not found");
         return 0;  
}
