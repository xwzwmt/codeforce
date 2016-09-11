#include<stdio.h>
int main()
{
int j,m;
int prime(int m);
scanf("%d",&m);
for(j=2;j<=m;j++)
{
if(prime(m)!=0)
printf("%d\n",m);
}
}
int prime(int m)
{
	int i,n;
	if(m==1)
		return 0;
	for(i=2;i<=m;i++){
	if(m%i==0)
	return 0;
	else return 1;
}
