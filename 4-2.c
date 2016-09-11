#include<stdio.h>
int main()
{
	int i,k;
	char a[20];
	char str[12][8]={"enter", "number", "size", "begin", "of", "cat", "case", "program", "centain", "a", "cake", "side"};
	for(i=0;i<11;i++)
		for(k=i+1;k<12;k++)
		{
		if(strlen(str[i])>strlen(str[k])){
			strcpy(a,str[i]);
			strcpy(str[i],str[k]);
			strcpy(str[k],a);}
			else if(strlen(str[i])==strlen(str[k])){
				if(strcmp(str[k],str[i])<0)
	{
		strcpy(a,str[k]);
		strcpy(str[k],str[i]);
		strcpy(str[i],a);
	}
				
		}
	}
		for(i=0;i<12;i++)
			printf("%s\n",str[i]);
			return 0;
		}