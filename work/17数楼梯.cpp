#include<stdio.h>
static	long long a[5001][1000]={0};
static	int n,i,len=1;
void fun(int x)
{
	for(int i=1;i<=len;i++)
	  a[x][i]=a[x-1][i]+a[x-2][i];
	
	for(int i=1;i<=len;i++)
	  if(a[x][i]>9)
	  {
	  	a[x][i+1]+=a[x][i]/10;
	  	a[x][i]%=10;
	  }
	if(a[x][len+1]) len++;//高精度转换 :将数字转化为字符 
}
int main()
{

	scanf("%d",&n);
	n++; 
	a[0][1]=1;
	a[1][1]=1;
	for(i=2;i<n;i++)
		fun(i);
	for(i=len;i>=1;i--)
	printf("%lld",a[n-1][i]);
	return 0;
}

