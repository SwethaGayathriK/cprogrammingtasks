#include<stdio.h>
void main()
{
char a[10],b[20];
printf("enter your first name:");
scanf("%s",&a);
printf("enter your last name:");
scanf("%s",&b);
strcat(a," ");
strcat(a,b);
printf("your full namre is %s",a);
}
