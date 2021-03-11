#include<stdio.h>
int main(){
    char str1[50],str2[50];
    int i;
    printf("Enter string1:\n");
    gets(str1);
    printf("Enter string2:\n");
    gets(str2);
    for(i=0;str1[i]!='\0' || str2[i]!='\0';i++)
        if(str1[i]!=str2[i])
            break;
    if(str1[i]-str2[i]==0)
        printf("Both strings are equal.");
    else if(str1[i]-str2[i]>0)
        printf("String1 is greater than String2.");
    else
        printf("String1 is lesser than String2.");
    return 0;
}


