#include<stdio.h>
#include<string.h>
int main()
{
	int i,x,y,j=0;
	char a[80],b[80];
	gets(a);
	gets(b);
	x=strlen(a);
	y=strlen(b);
	for(i=x;i<x+y;i++){
		a[i]=b[j];
		j++;}
	a[x+y]='\0';
	puts(a);
	return 0;
}
