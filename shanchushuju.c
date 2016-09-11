#include<stdio.h>
int main()
{
	int i,j,k,count=0,index,n=0,flag=1;
	char a[50];
	for(n=0;flag&&scanf("%d ",&a[n])==1;n++)
	{
		if(a[n]=='\0') flag=0;
	}
	while(a[i]!=0)
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++)
			if(a[i]==a[j]){
				count++;
				a[j]=a[i];
 
 } 
	}
			n=n-count;
for(i=0;i<n-1;i++)
	printf("%d",a[i]);
 return 0; 
}  

