// OJsample04.c	计算若干个整数的项数及总和
#include <stdio.h>

int GetData(int *p)
{
	int n, flag=1;
	char c;
	for(n=0; flag && scanf("%d%c", p+n, &c)==2; n++)
	{			// 注意此处"%d%c"中间不要插入空格
		if(c=='\n') flag=0;
	}
	return n;
}

int Sum(const int *p, int n)
{
	int sum=0, i;
	for(i=0; i<n; i++)
		sum += p[i];
	return sum;
}

int main()
{
	const int N = 1024;
	int array[N], n, k=0;
	
	while((n=GetData(array))!=0)
		printf("Case %d: %d, %d\n", ++k, n, Sum(array, n));
	return 0;
}
