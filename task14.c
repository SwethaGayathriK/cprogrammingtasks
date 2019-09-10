//program to process student marks and display results
#include<stdio.h>
struct  student
{
char name[25];
int rollno;
int marks;
char grade;
};
void main()
{
struct student stud[15];
int i,n;
printf("enter the number of students:");
scanf("%d",&n);
for(i=0;i50 && stud[i].marks<=55)
{
stud[i].grade='D';
}
else if(stud[i].marks>55 && stud[i].marks<=60)
{
stud[i].grade='C';
}
else if(stud[i].marks>60 && stud[i].marks<=75)
{
stud[i].grade='B';
}
else if(stud[i].marks>75 && stud[i].marks<=90)
{
stud[i].grade='A';
}
else if(stud[i].marks>90)
{
stud[i].grade='S';
}
}
for(i=0;i<40;i++)
printf("_");
printf("\n");
printf("NAME\tROLLNO\tMARKS\t
GRADE\t",stud[i].name,stud[i].rollno,
stud[i].marks,stud[i].grade);
}
for(i=0;i<40;i++)
printf("_");
printf("\n");
for(i=0;i<40;i++)
{
printf("%s\t%d\t%d\t%c\n",stud[i].name,stud[i].rollno,stud[i].marks,stud[i].grade);
}
for(i=0;i<40;i++)
printf("_");
printf("\n");
}
