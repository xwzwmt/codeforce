#include<stdio.h>
int main(void)
{
	char p,*h[12],c[12],*str[12] = {"enter", "number", "size", "begin", "of", "cat", "case", "program", "centain", "a", "cake", "side"};
	int i,n;
	for(i=0;i<12;i++){
		h[i]=str[i];
	c[i]=*str[i];}
		for(n=1;n<12;n++)
			for(i=0;i<12-n;i++)
		{
			if(c[i]>c[i+1])
			{
				p=c[i];
				c[i]=c[i+1];
				c[i+1]=p;
				h[i]=str[i];
				str[i]=str[i+1];
				str[i+1]=h[i];
				}
			}
			for(i=0;i<12;i++)
				printf("%s ",str[i]);
				return 0;
	}
