#include<stdio.h>
int main()
{
	int i,count=1,sum=0;
	for(i=1;i<=64;++i)
	{
		count=count*2;
		sum=sum+count;
	}
	printf("%d",sum);
	return 0;
}