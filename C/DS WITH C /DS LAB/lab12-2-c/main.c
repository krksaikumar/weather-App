#include<stdio.h>
int main(){
 char str[100], *ch;
 int i, v=0, c=0;
 printf("Enter a string: ");
 scanf("%s",str);
 ch = str;
 while(*ch!='\0'){
  if(*ch=='a' || *ch=='e' || *ch=='i' || *ch=='o' || *ch=='u' || *ch=='A' || *ch=='E' || *ch=='I' || *ch=='O' || *ch=='U'){
   v++;
  }
  else{
   c++;
  }
  ch++;
 }
 printf("Total number of vowels : %d, consonants : %d\n",v,c);
 return 0;
}










