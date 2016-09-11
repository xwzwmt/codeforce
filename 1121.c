#include<stdio.h>
int main()
{
	int i,n,s=0;
	scanf("%d",&n);
	for(i=1;;i++){
		s=s+i*i*i;
		if(s>n)
			break;
		}
			printf("%d",i-1);
	return 0;
}