#include<stdio.h>
int main() {
 FILE *fp;
 char ch;
 fp = fopen("Sample.txt", "w");
 printf("Enter the text press ctrl+z for end of file: \n");
 while ((ch=getchar())!=EOF) {
  putc(ch,fp);
 }
 fclose(fp);
 fp = fopen("Sample.txt", "a");
 printf("Enter the text to append to a file press ctrl+z for end of file: \n");
 while ((ch=getchar())!=EOF) {
  putc(ch,fp);
 }
 fclose(fp);
 fp = fopen("Sample.txt", "r");
 printf("File content after appending : \n");
 while ((ch=fgetc(fp))!=EOF) {
  putchar(ch);
 }
 printf("\n");
 fclose(fp);
 return 0;
}



