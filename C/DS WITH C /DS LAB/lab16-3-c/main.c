#include<stdio.h>
int main() {
 FILE *fp;
 char ch, fileName[30]="Sample.txt";
 int status;
 fp = fopen(fileName, "w");
 printf("Enter the text press ctrl+z for end of file: \n");
 while ((ch=getchar())!=EOF) {
  putc(ch,fp);
 }
 fclose(fp);
    fp = fopen(fileName,"r");
    if(fp==NULL){
        printf("File doesn't exists.\n");
        return 0;
    }
    else{
        printf("File exists.\n");
    }
    fclose(fp);
    status = remove(fileName);
    if(status==0)
        printf("%s file is deleted.",fileName);
    else
        printf("Unable to delete %s file.",fileName);
    return 0;
}

