\\scanf 函数原型：int scanf(const char * restrict format,...);形式参数的意义是格式字符串的首地址\\
    \\返回值:scanf("%d %d",&a,&b);若ab都录入，返回值为2，只录入一个为1，都木有为0\\
\\printf 函数原型 extern void printf(const char *format,...);形式参数的意义是格式字符串的首地址\\
	\\返回值：int printf(const char *format, [argument]);其返回值为整形，控制输出字符\\
\\gets 函数原型：char * gets ( char * str );形式参数的意义是读入的字符串的首地址\\
     \\返回值：读入成功，返回与参数buffer相同的指针；读入过程中遇到EOF(End-of-File)或发生错误，返回NULL指针。所以在遇到返回值为NULL的情况，要用ferror或feof函数检查是发生错误还是遇到EOF。\\
\\puts 函数原型：int puts(const char *string);\\
     \\返回值：执行成功返回非负数。执行失败返回EOF。如果参数为NULL，则设置errno为EINVAL，并返回EOF\\
\\scanf与gets区别：scanf("%s",s) 函数输入字符串时存在一个问题，就是如果输入了空格会认为字符串结束，空格后的字符将作为下一个输入项处理，但gets()函数将接收输入的整个字符串直到遇到换行为止。\\


\\atoi函数原型：int atoi(const char *nptr); \\参数nptr表示字符串首地址，返回一个整型数 \\
    \\返回值：执行成功返回整数，不成功返回0\\
\\atol函数原型： long atol(const char *nptr);参数nptr表示字符串首地址，返回一个长整型数 \\
    \\返回值：返回转换后的长整型数。如果传入的字符串为空，或者字符串包含的内容非阿拉伯数字序列，则函数返回默认值0。\\
\\atof函数原型： double atof(const char *nptr)Ｎ数nptr表示字符串首地址，返回一个浮点数 籠\
	\\返回值： 返回转换后的浮点型数。\\
\\sscanf函数原型：int sscanf( const char *, const char *, ...);\\
   \\buffer 存储的数据的地址 
      \\format 格式控制字符串 
      \\argument 选择性设定字符串 
      \\sscanf会从buffer里读进数据，依照argument的设定将数据写回。
\\返回值：成功则返回参数数目，失败则返回-1，错误原因存于errno中。\\
\\sprintf函数原型：int sprintf( char *buffer, const char *format, [ argument] … );\\
	
	\\返回值：返回写入buffer 的字符数，出错则返回-1. 如果 buffer 或 format 是空指针，且不出错而继续，函数将返回-1，并且 errno 会被设置为 EINVAL。\\
		\\buffer：char型指针，指向将要写入的字符串的缓冲区。
       \\format：格式化字符串。
       \\[argument]...：可选参数，可以是任何类型的数据。

