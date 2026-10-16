//check for user authentication
#include<stdio.h>
int main()
{
int uid,upwd,sid,spwd;
sid=2424;
spwd=2424;
printf("enter uid ,upwd in numbers");
scanf("%d%d",&uid,&upwd);

if((uid==sid)&&(upwd==spwd))
printf("login successful");

else
printf("failed login");
return 0;
}
