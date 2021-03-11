#include<stdio.h>
int main() {
 FILE *fp1, *fp2;
 char ch;
 fp1 = fopen("Sample.txt", "w");
 printf("Enter the text press ctrl+z for end of file: \n");
 while ((ch=getchar())!=EOF) {
  putc(ch,fp1);
 }
 fclose(fp1);
 fp1 = fopen("Sample.txt", "r");
 fp2 = fopen("CopiedFile.txt", "w");
    while((ch=fgetc(fp1))!=EOF){
        putc(ch,fp2);
    }
    putc(ch,fp2);
    fclose(fp1);
    fclose(fp2);
    fp2 = fopen("CopiedFile.txt", "r");
    printf("Copied text is : \n");
    while((ch=fgetc(fp2))!=EOF){
        putchar(ch);
    }
    fclose(fp2);
    printf("\n");
    return 0;
}


