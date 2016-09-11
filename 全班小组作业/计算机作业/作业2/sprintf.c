#include<stdio.h>
int main()/*原型:
intsprintf(char*str,constchar*format,...)。
形式参数：char。
返回值：返回写入buffer 的字符数，出错则返回-1. 如果 buffer 或 format 是空指针，且不出错而继续，函数将返回-1，并且 errno 会被设置为 EINVAL。
*/


{
	char  buffer[200],s[] = "computer", c = 'l';
    int   i = 35, j;
    float fp = 1.7320534f;    // 格式化并打印各种数据到buffer    
	j  = sprintf( buffer,    "   String:    %s\n", s ); // C4996
    j += sprintf( buffer + j, "   Character: %c\n", c ); // C4996
    j += sprintf( buffer + j, "   Integer:   %d\n", i ); // C4996
    j += sprintf( buffer + j, "   Real:      %f\n", fp );// C4996
	printf( "Output:\n%s\ncharacter count = %d\n", buffer, j );  

	return 0;
}
