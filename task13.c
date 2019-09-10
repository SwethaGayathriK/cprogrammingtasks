#include<stdio.h>
void main()
{
int a[50];
int ,ax,min,n,i;
printf("enter the number of elements in an array");
scanf("%d",&n);
printf("enter the elements of an array:");
for(i=0;imax)
max=a[i];
}
printf("the smallest element in the array is %d\n",min);
printf("the largest element in the array is %d\n",max);
}
