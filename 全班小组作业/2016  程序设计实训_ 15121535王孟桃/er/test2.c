#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str1[]=" 3.145e-huli";
	printf("%d\n",atoi(str1));
	printf("%ld\n",atol(str1));
	printf("%lf\n",atof(str1));
	char str2[81];
	sprintf(str2,"year:%d,month:%d,day:%d",2016,6,29);
	puts(str2);
	int y,m,d;
	sscanf(str2,"year:%d,month:%d,day:%d",&y,&m,&d);
	printf("%d %d %d\n",y,m,d);
	return 0;
}
