
#include<stdio.h> 
#include<string.h> 
int main(void)  
{  
	char dest[10] = "Hello";
	char src[20] = "World"; 
	strncat(dest, src, 50);
	printf("%s\n", dest);
	return  0; 
}
\\����ԭ�ͣ�char * strncat(char *dest, const char *src, size_t n);
\\��ʽ�������������͵ĺ���: destָ��Ŀ���ַ�����srcΪָ��Դ�ַ�����
\\����: ��src��ָ�ַ�����ǰn���ַ���ӵ�dest��ָ�ַ����Ľ�β����������dest��ָ�ַ�����β��'\0'���Ӷ�ʵ���ַ��������ӡ�
\\����ֵ: ����ָ��dest��ָ�롣*/