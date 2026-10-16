#include<stdio.h>
int sum(int n);
void main()
{
int s,n;
printf("Enter n");
scanf("%d",&n);
s=sum(n);
printf("%d",s);
}
int sum(int n)
{
if(n==1)
return 1;
else
return n+sum(n-1);
}
