#include<stdio.h>
int main()/*ԭ��:
intsprintf(char*str,constchar*format,...)��
��ʽ������char��
����ֵ������д��buffer ���ַ����������򷵻�-1. ��� buffer �� format �ǿ�ָ�룬�Ҳ����������������������-1������ errno �ᱻ����Ϊ EINVAL��
*/


{
	char  buffer[200],s[] = "computer", c = 'l';
    int   i = 35, j;
    float fp = 1.7320534f;    // ��ʽ������ӡ�������ݵ�buffer    
	j  = sprintf( buffer,    "   String:    %s\n", s ); // C4996
    j += sprintf( buffer + j, "   Character: %c\n", c ); // C4996
    j += sprintf( buffer + j, "   Integer:   %d\n", i ); // C4996
    j += sprintf( buffer + j, "   Real:      %f\n", fp );// C4996
	printf( "Output:\n%s\ncharacter count = %d\n", buffer, j );  

	return 0;
}
