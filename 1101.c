#include<stdio.h>
int main()
{
int i,j,n;
for(n=1;n<=3000;n++)
{
int sum1=0,sum2=0;
for(i=1;i<=n/2;i++)
{if(n%i==0)
sum1=sum1+i;
}
if(sum1>=n)
	continue;
for(j=1;j<=sum1/2;j++)
{
if(sum1%j==0)
sum2=sum2+j;
}
if(n==sum2)
printf("(%d,%d)",n,sum1);
}
return 0;
}

