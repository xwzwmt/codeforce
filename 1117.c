#include<stdio.h>
int main()
{
	int a[10][10];
	int n,i,j,k,answer=0;
	scanf("%d",&n);
	if(n%2!=0)
	k=(n+1)/2;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
			for(i=0;i<n;i++)
				answer=answer+a[i][i]+a[i][n-i-1];
				answer=answer-a[k][k];
				printf("%d",answer);
				return 0;
			}