#include<stdio.h>
#include<stdlib.h>

struct course{
  char subject[30];
  int marks;
};

int main(){
    struct course *ptr;
 int i, noOfRecords;
    printf("Enter number of records : ");
 scanf("%d", &noOfRecords);
 ptr = (struct course*)malloc(sizeof(struct course)*noOfRecords);
 for(i=0;i<noOfRecords;i++){
  printf("Enter the subject name and marks : ");
  scanf("%s%d",ptr[i].subject,&ptr[i].marks);
 }
 printf("Subject\tMarks\n");
 for(i=0;i<noOfRecords;i++){
  printf("%s\t%d\n",ptr[i].subject,ptr[i].marks);
 }
}






