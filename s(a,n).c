#include<stdio.h>
int main()
{
	int n,a,b,i,k=0,c;
	while((scanf("%d %d",&a,&n))==2)
	{
		printf("Case %d: ",++k);
		sum=0£»
		b=1;c=0;
		for(i=1;i<=n;i++)
		{
			sum=sum+a+c;
		  b=b*10;
			c=c+a*b;
		}
		printf("%d",sum);
	}
	return 0;
}