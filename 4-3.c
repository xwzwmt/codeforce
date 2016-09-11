#include<stdio.h>
int main()
{
	int i,k;
	char a;
	 char *str[12] = {"enter", "number", "size", "begin", "of", "cat", "case", "program", "centain", "a", "cake", "side"};
	 for(i=0;i<11;i++)
 for(k=i+1;k<12;k++)
	if(strcmp(str[k],str[i])<0)
	{
		a=*str[i]
		*str[i]=*str[k];
		*str[k]=a;
	}
	for(i=0;i<12;i++)
		printf("%s\n",str[i]);
	return 0;
}