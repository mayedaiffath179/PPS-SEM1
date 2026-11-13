//c program on sum of array elements
#include<stdio.h>
int main()
{
int M[5],i,s=0;
//int M[5]={10,20,30,40,50};
printf("Enter the 5 values");
for(i=0;i<5;i++)
{
scanf("%d",&M[i]);
}
for(i=0;i<5;i++)
{
s=s+M[i];
}
{
printf("sum=%d",s);
}
return 0;
}
