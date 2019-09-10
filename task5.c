#include<stdio.h>
void main()
{
int n,sum=0,rem=0;
printf("enter a number:");
scanf("%d",&n);
while(n>0)
{
rem=n%10;
sum=sum*10+rem;
n=n/10;
}
printf("\n reverse no. is %d",sum);
}
