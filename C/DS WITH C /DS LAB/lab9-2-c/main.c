#include<stdio.h>
int main(){
 int a = 9, *intptr;
 float pi = 3.14, *floatptr;
 char ch = 'I', *charptr;
 intptr = &a;
 floatptr = &pi;
 charptr = &ch;
 printf("Size of an int ptr = %d\n",sizeof(intptr));
 printf("Size of a float ptr = %d\n",sizeof(floatptr));
 printf("Size of a char ptr = %d\n",sizeof(charptr));
 printf("Size of an int type = %d\n",sizeof(*intptr));
 printf("Size of a float type = %d\n",sizeof(*floatptr));
 printf("Size of a char type = %d\n",sizeof(*charptr));
 return 0;
}


