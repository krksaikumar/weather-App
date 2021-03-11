#include<stdio.h>
int main(){
	int n, r, i, j ;
	//printf("Enter the number : \n");
	scanf("%d", &n);
	//finding no. of rows
	for(i=1; i<=n*2; i+=2){
		r = i;
	}
	//to print pattern 
	for(i=1; i<=r; i++){
		if(i<=n){
			for(j=1;  j<=r; j++){
				if(j>=i && j<=r-(i-1))  printf("%d ", n-(i-1));     
				else if(j<i) printf("%d ", n-(j-1));
				else printf("%d ", n-(r-j));
			}
		}
		else{
			for(j=1; j<= r; j++){
				if(j>=(r-i)+1 && j<=i)  printf("%d ", (i-n)+1);
				else if(j<(r-i)+1) printf("%d ", n-(j-1));
				else printf("%d ", n-(r-j));
			}
		}
		printf("\n");
	}
	
	
	return 0;
}