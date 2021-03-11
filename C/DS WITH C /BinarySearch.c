#include<stdio.h>
int main(){
	int a[100], n, i, first, last, middle, s ;
	
	printf("Enter the no. of elements: \n");
	scanf("%d", &n);
	printf("Enter the elements in ascending order: \n");
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	printf("Enter the element to search: \n");
	scanf("%d", &s);
	first  = 0;
	last = n-1;
	middle = (first  + last)/2;
	while(first <= last){
		if( s == a[middle] ){
		    printf("Element found at index %d: \n", middle);
		    break;
		}
		else if (s > a[middle])  
		    first = middle +1 ;
		else if (s < a[middle])
		    last = middle -1;
		 middle = (first + last)/2;
	}
	if( first > last){
		printf("Element not found \n");
	}
	return 0;
}