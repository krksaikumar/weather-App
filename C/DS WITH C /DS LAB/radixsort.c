#include<stdio.h>
int getMax(int arr[], int n) 
{
          int max = arr[0];
          int i;
          for (i = 1; i < n; i++)
          {
                      if (arr[i] > max)
                      max = arr[i];
          }
          return max;
} 
void countSort(int arr[], int n, int exp) 
{
          int output[n]; // output array
          int i, count[10] = { 0 };
          // Store count of occurrences in count[]
          for (i = 0; i < n; i++)
          count[(arr[i] / exp) % 10]++;
          for (i = 1; i < 10; i++)
          count[i] += count[i - 1];         
          // Build the output array
          for (i = n - 1; i >= 0; i--)
          {
                  output[count[(arr[i] / exp) % 10] - 1] = arr[i];
                  count[(arr[i] / exp) % 10]--;
          }
          for (i = 0; i < n; i++)
          arr[i] = output[i];
}     
// The main function to that sorts arr[] of size n using Radix Sort
void radixsort(int a[], int n)
{
         int max = getMax(a, n);
         int i;
         for (i = 1; max / i > 0; i *= 10)
         countSort(a, n, i);
}
int main() 
{
         int a[] = { 170, 45, 75, 90, 802, 24, 2, 66 };
         int i;
         int n = sizeof(a) / sizeof(a[0]);
         radixsort(a, n);
         for (i = 0; i < n; i++)
         printf("%d ", a[i]);
         return 0;
}
