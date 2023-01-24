#include<stdio.h>
#include<string.h>
int max(int a,int b)
{
	if(a>=b)
	return a;
	else 
	return b;
}

int main()
{
	int a[1005],b[1005],c[1005];
	char p[1005],q[1005];
	int i,n,len;
	scanf("%d",&n);
	///getchar();
	getchar(); 
	gets(p);
	gets(q);
	 len=strlen(p);
	for( i=0;i<len;i++)
	if(p[i]>='a'&&p[i]<='z')
	 a[len-i]=p[i]-87;
		else 
		a[len-i]=p[i]-48;
	len=strlen(q);
	for( i=0;i<len;i++)
	if(q[i]>='a'&&q[i]<='z')
	 b[len-i]=q[i]-87;
		else 
		b[len-i]=q[i]-48;	
	len=max(strlen(p),strlen(q));
	for(int i=1;i<=len;i++)
	{
		c[i]+=a[i]+b[i];
		c[i+1]=c[i]/n;
		c[i]%=n;
	}
	if(c[len+1])
	 len++;
	for(int i=len;i>0;i--)
	if(c[i]<=9)
	 printf("%c",c[i]+48);
	else 
 printf("%c",c[i]+87);
	return 0;
}
