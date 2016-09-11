// OJsample05.c	еп╤о╩ьнд
#include <stdio.h>
#include <string.h>

int Palindrome(const char *str)
{
	int left=0, right=strlen(str)-1;

	while(left<right && str[left]==str[right])
	{
		left++;
		right--;
	}
	return !(left<right);
}
int main()
{
	char str[1000];
	int k, n;

	scanf("%d", &n);
	gets(str);
	for(k=1; k<=n; k++)
	{
		gets(str);
		printf("Case %d: %s\n", k, (Palindrome(str)? "YES." : "NO."));
	}
	return 0;
}
