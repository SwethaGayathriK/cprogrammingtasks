#include<stdio.h>
void main()
{
char a[100],b[100];
printf("enter a string");
gets(a);
strcpy(b,a);
strrev(b);
if(strcmp(a,b)==0)
printf("the string is palindrome");
else
printf("the string is not palindrome");
}
