#include<stdio.h>
int main()
{
	int a,b,c,n,count=0;
	for(n=100;n<=1000;n++)
	{a=n%10;
	 b=n/10%10;
	c=n/100;
	if(n==a*a*a+b*b*b+c*c*c){
		printf("%d\n",n);
		count++;
		if(count%10==0)
		printf("\n");
	}
	}
	
	return 0;
}