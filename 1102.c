#include<stdio.h>
int main()
{
int i,a,b;
for(i=1;i<40;i++){
a=i%5;
b=i%2;
if(a!=0&&b!=0)
printf("%d/40,",i);
}
	return 0;
}