#include<stdio.h>
int main()
{
	int i,k;
	double s;
	scanf("%d",&k);
	s=0;
	i=1;
	while(s<=k)
	{
		s=s+1.0/i;
		i=i+1;
	}
	printf("%d",i-1);
	return 0;
}
	