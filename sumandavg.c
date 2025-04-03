#include<stdio.h>
void main()
{
int i,sum=0,a[50],n;
float avg;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the value");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("\nsum of the element=%d",sum);
avg=(float)sum/n;
printf("\n avg=%f",avg);
}
