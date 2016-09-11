#include<stdio.h>
int main()
{
	int a[4];
	int i,j,k,index,max;
	for(i=0;i<4;i++)
	scanf("%d",&a[i]);
	for(j=0;j<3;j++){
		index=j;
		for(k=j+1;k<4;k++)
			if(a[k]<a[index])
				index=k;
				max=a[index];a[index]=a[j];a[j]=max;
			}
		for(i=0;i<4;i++)
			printf("%d ",a[i]);
			return 0;
		}
		
