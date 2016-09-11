#include<stdio.h>
int main()
{
	int i,a,b,c;
	for(i=17;i<=2000;i++){
	a=(((i-1)/8-1)/8-7)/8;
	c=((i-4)/17-15)/17;
	if(c==2*a)
	{printf("%d\n",i);
		break;}
	}
	return 0;
}