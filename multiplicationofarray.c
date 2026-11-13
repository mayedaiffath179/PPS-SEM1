//c program on multiplication of array elements
#include<stdio.h>
int main()
{
int M[5],i,m=1;
//int M[5]={10,20,30,40,50};
printf("Enter the 5 values");
for(i=0;i<5;i++)
{
scanf("%d",&M[i]);
}
for(i=0;i<5;i++)
{
m=m*M[i];
}
{
printf("multiplication=%d",m);
}
return 0;
}
