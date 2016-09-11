#include<stdio.h>
int main(void)
{
	int a,b,c,d;
	scanf("%d",&a);
	b=a%10;c=a/10%10;d=a/100;
	if(a==b*b*b+c*c*c+d*d*d)
		printf("1");
	else
		printf("0");
		return 0;
}