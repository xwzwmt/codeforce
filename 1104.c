#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	for(a=0;a<2;a++){
		for(b=0;b<2;b++){
			for(c=0;c<2;c++){
				for(d=0;d<2;d++){
					for(e=0;e<2;e++){
						for(f=0;f<2;f++){
if(a+b>=1&&a+d!=2&&a+e+f==2&&b==c&&c+d==1&&(d+e==0||d==1))
	printf("A:%d B:%d C:%d D:%d E:%d F:%d",a,b,c,d,e,f);
}
}
}
}
}
}
return 0;
}
	