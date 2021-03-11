#include<stdio.h>
#include<math.h>
typedef struct triangle{
	int a;
	int b;
	int c;
}triangle;

float volume(triangle tr){
	int a = tr.a;
	int b = tr.b;
	int c = tr.c;
	
	float p = (float)(a+b+c)/(float)2;
// 	printf("%f", pow(p*(p-a)*(p-b)*(p-c), (float)1/(float)2 ));
	return pow(p*(p-a)*(p-b)*(p-c), (float)1/(float)2);
}

void swapTriangles(triangle *t1, triangle *t2){
	triangle temp = *t1;
	*t1 = *t2;
	*t2 = temp;
}

void sort_by_area(triangle* tr, int n){
	
	float *a = (float *)malloc(n*sizeof(float));
	for(int i=0; i<n; i++)
		a[i] = volume(tr[i]);
	//selection sort
	int minInd = 0;
	for(int i=0; i<n; i++){
		minInd = i;
		for(int j=i+1; j<n; j++){
			if(a[j] < a[minInd])
				minInd = j;
		}
	     int temp = a[i];
		a[i] = a[minInd];
		a[minInd] = temp;
		swapTriangles(&tr[i], &tr[minInd]);
	
	}
/*	for(int i=0; i<n; i++)
	printf("%f  ", a[i]);*/
}



int main(){
	int n ;
	scanf("%d", &n);
	triangle *tr = (triangle*)malloc(n*sizeof(triangle));
	for(int i = 0; i<n; i++){
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	
	for(int i = 0; i<n; i++){
		printf("%d %d %d \n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}