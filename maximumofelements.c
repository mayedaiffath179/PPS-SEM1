//maximum of given elements
#include<stdio.h>
int main()
{
int M[5],i,max;
printf("Enter 5 values");
for(i=0;i<5;i++)
scanf("%d",&M[i]);
for(i=0;i<5;i++)
{
if(M[i]>max)
{
max=M[i];
}
}
printf("max=%d",max);
return 0;
}
