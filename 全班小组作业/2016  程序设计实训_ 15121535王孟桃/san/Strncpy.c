//¸´ÖÆÇ°n¸ö×Ö·û
#include<stdio.h>
void main()
{
	int i,n,m;
	char a[100],b[100];
	printf("Input a string:");
	gets(a);
	scanf("%d",&n);
	for(i=0;a[i]!='\0';i++)
		m++;
	if(n<=m)
    {
		for(i=0;i<n;i++)
			b[i]=a[i];
		b[n]='\0';
	}
	else
		for(i=0;a[i]!='\0';i++)
			b[i]=a[i];
		b[i]='\0';
	puts(b);
}
