\\scanf 函数原型：int scanf(const char * restrict format,...);形式参数的意义是格式字符串的首地址\\
    \\返回值:scanf("%d %d",&a,&b);若ab都录入，返回值为2，只录入一个为1，都木有为0\\
\\printf 函数原型 extern void printf(const char *format,...);形式参数的意义是格式字符串的首地址\\
	\\返回值：int printf(const char *format, [argument]);其返回值为整形，控制输出字符\\
\\gets 函数原型：char * gets ( char * str );形式参数的意义是读入的字符串的首地址\\
     \\返回值：读入成功，返回与参数buffer相同的指针；读入过程中遇到EOF(End-of-File)或发生错误，返回NULL指针。所以在遇到返回值为NULL的情况，要用ferror或feof函数检查是发生错误还是遇到EOF。\\
\\puts 函数原型：int puts(const char *string);\\
     \\返回值：执行成功返回非负数。执行失败返回EOF。如果参数为NULL，则设置errno为EINVAL，并返回EOF\\
\\scanf与gets区别：scanf("%s",s) 函数输入字符串时存在一个问题，就是如果输入了空格会认为字符串结束，空格后的字符将作为下一个输入项处理，但gets()函数将接收输入的整个字符串直到遇到换行为止。\\

