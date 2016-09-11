#include<stdio.h>
#define N 10000
void find_odd(int odd[],int n)
{
 int i;
 for(i=0;i<n;i++)
  odd[i]=n*n-n+1+i*2;
}
main()
{
 int a[N]={0};
 int n,i,b=0;
 scanf("%d",&n);
 find_odd(a,n);
 for(i=0;i<N;i++)
 if(a[i]!=0)
	 b=b+a[i];
 printf("%d*%d*%d=%d=",n,n,n,b);
 for(i=0;i<N;i++)
 {
  if(a[i]!=0)
   printf("%d+",a[i]);
  else
  {
   printf("\b ");
   break;
  }
 }
 return 0;
}