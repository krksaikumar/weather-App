#include<stdio.h>
int main(){
	char grades[9], name[30];
	int gradepoints[9];
	int creditpoint[9];
	float credits[9] = {3, 3, 3, 1.5, 3, 1.5, 3, 1.5, 1};
	int total=0;
	float SGPA, percentage;
	//printf("\n****ONLY PASS STUDENTS CAN GET THE PERCENTAGE****\n\n");
	printf("Enter the grades in the order \n\tM2,M3, AP, AP LAB, PPSUC, PPSUC LAB, DLD, CS LAB, EEP\n");
	for(int i = 0; i<9; i++){
      	printf("enter : ");
	      scanf(" %c", &grades[i]);
	}
	printf("\n");
	for(int i=0; i<9; i++){
		if(grades[i] == 'o' || grades[i] =='O')
		   gradepoints[i] = 10;
        else if(grades[i] == 's' || grades[i] =='S')
		   gradepoints[i] = 9 ;
	    else if(grades[i] == 'a' || grades[i] =='A')
		   gradepoints[i] = 8;
	    else if(grades[i] == 'b' || grades[i] =='B')
		   gradepoints[i] = 7;
 	   else if(grades[i] == 'c' || grades[i] =='C')
		   gradepoints[i] = 6;
	    else 
		    gradepoints[i] = 0;
	}
	
	for(int i=0; i<9; i++){	
		creditpoint[i]=gradepoints[i] * credits[i];
	}
	for(int i=0; i<9; i++)
	     total += creditpoint[i];

	 SGPA =(float)total/(float)20.5;
	 printf("Enter your name : ");
	 scanf("%s", name );
	 printf("\nName = %s\n", name);
	 printf("SGPA = %f\n", SGPA);
	 percentage =(float) (SGPA*10 - 7.5);
	 printf("PERCENTAGE = %f\n", percentage);
}