#include<stdio.h>
int main()
{
	int n,i;
	double j=0,k=100.0;
	scanf("%d",&n);
	for(i=1;i<n;i++){
		k=k/2;
		j=j+k*2;
	}
		printf("%.4f",j);
		return 0;
	}