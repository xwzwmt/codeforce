#include<stdio.h>
int main()
{
	int i=1;
	signed long x;
	
	while((scanf("%ld",&x))==1)
	{
		printf("Case %d: ",i++);
		if(x*x*x*x*x/(x*x*x*x)==x)
			printf("%ld, %ld, %ld, %ld, %ld\n",x,x*x,x*x*x,x*x*x*x,x*x*x*x*x);
		else if(x*x*x*x/(x*x*x)==x&&x*x*x*x*x/(x*x*x*x)!=x)
			printf("%ld, %ld, %ld, %ld\n",x,x*x,x*x*x,x*x*x*x);
		else if(x*x*x/(x*x)==x&&x*x*x*x/(x*x*x)!=x)
			printf("%ld, %ld, %ld\n",x,x*x,x*x*x);
			else if(x*x/x==x&&x*x*x/(x*x)!=x)
				printf("%ld, %ld\n ",x,x*x);
				else if(x*x/x!=x)
					printf("%ld\n",x);

	}
	return 0;
}
