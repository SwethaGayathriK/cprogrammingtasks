#include<stdio.h>
void main()
{
int i,n,fact=1;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("the factorial of %d is %d\n",n,fact);
}
