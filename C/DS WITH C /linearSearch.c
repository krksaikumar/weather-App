#include <stdio.h>
int main(){
	int a[100], n, i, s  ;
	
	printf("Enter the no. of elements: \n");
	scanf("%d",&n);
	printf("Enter the elements: \n");
	for(i=0; i<n; i++ ){
		scanf("%d", &a[i]);
	}
	printf("Enter the element to be searched: \n");
	scanf("%d", &s);
	for(i=0; i<n; i++){
		if(a[i] == s){
		   printf("element found at index %d", i);
		   break;
		}		   
	}
	if(i == n){
		printf("Element not found\n");
	}
    return 0;	
}