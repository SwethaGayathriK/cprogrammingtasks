#include<stdio.h>
void main()
{
int n,sum=0,rem=0,cube=0,t;
printf("enter a number:");
scanf("%d",&n);
t=n;
while(n!=0)
{
rem=n%10;
cube=pow(rem,3);
sum=sum+cube;
n=n/10;
}
if(sum==t)
printf("the given number is armstrong number");
else
printf("the given number is not armstrong number");
}
