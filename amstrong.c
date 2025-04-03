#include<stdio.h>
void main()
{
int n,sum=0,temp,x;
printf("enter the number");
scanf("%d",&n);
temp=n;
while(n>0)
{
x=n%10;
sum=sum+(x*x*x);
n=n/10;
}
if(temp==sum)
{
printf("\nthe number is amstrong");
}
else
{
printf("\nthe number is not amstrong");
}
}
