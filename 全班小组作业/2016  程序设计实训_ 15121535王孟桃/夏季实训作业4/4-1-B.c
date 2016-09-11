//∞¥◊÷µ‰–Ú≈≈–Ú£®√∞≈›≈≈–Ú∑®£©
#include <stdio.h>
#include <string.h>
int main()
{
	char t[12];
	char str[12][8]={"enter", "number", "size", "begin", "of", "cat", "case", "program", "centain", "a", "cake", "side"};
	int i,j;
	for(i=0; i<12; i++)
	{
		for(j=0; j<12-i; j++)
			if(strcmp(str[j+1],str[j])<0) 
			{strcpy(t,str[j]);
			strcpy(str[j],str[j+1]);
			strcpy(str[j+1],t);}
	}
	for(i=0; i<12; i++)
		printf("%s\n",str[i]);
	return 0;
}
