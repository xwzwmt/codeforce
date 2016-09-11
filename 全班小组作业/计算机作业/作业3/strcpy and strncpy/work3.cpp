#include <stdio.h>
char* sb(char *des, char *res)
{
	int i;
	for(i= 0; res[i]!='\0'; i++)
		des[i]= res[i];
	des[i]= '\0';
	return des;
}
char* py(char *des, char *res,int j)
{
	int i;
	for(i= 0; i<j; i++)
		des[i]= res[i];
	des[i]= '\0';
	return des;
}
int main (void)
{
	char d[80],s[]= "what the fuck";
	char a[80],b[]="son of bitch";
	sb(d,s);
	py(a,b,13);
	puts(d);
	puts(a);
	return 0 ;
} 
