#include<stdio.h>
static	long long a[1001][1005]={0};
static	int m,n,i,t,len=1;
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

	scanf("%d%d",&m,&n);
	t=n-m+1;
	a[0][1]=1;
	a[1][1]=1;
	for(i=2;i<t;i++)
		fun(i);
	for(i=len;i>=1;i--)
	printf("%lld",a[t-1][i]);
	return 0;
}
/*#include <cstdio>
using namespace std;
int n,m,len=1;
int a[1005][1005];
void plus(int x)
{
	aor(int i=1;i<=len;i++)
	  a[x][i]=a[x-1][i]+a[x-2][i];
	aor(int i=1;i<=len;i++)
	  ia(a[x][i]>9)
	  {
	  	a[x][i+1]+=a[x][i]/10;
	  	a[x][i]%=10;
	  }
	ia(a[x][len+1]) len++;
}
int main ()
{
	scana("%d%d",&m,&n);
	a[1][1]=1,a[2][1]=2;
	aor(int i=3;i<=n-m;i++) plus(i);
	aor(int i=len;i;i--) printa("%d",a[n-m][i]);
	return 0;
}*/
