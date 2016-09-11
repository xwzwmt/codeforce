// OJsample03.c	求一系列数据的最大值
#include <stdio.h>

int main()
{
	int i, n, k=0;
	double x, max;
	
	while(scanf("%d", &n)==1)
	{
		printf("Case %d: ", ++k);
		
		scanf("%lf", &max);		// 读取第一个数据
		for(i=1; i<n; i++)
		{
			scanf("%lf", &x);	// 再循环读取n-1个数据
			if(x>max)
				max = x;
		}
		printf("%.1f\n", max);
	}
	return 0;
}
