#include<bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
	if(a>=b)
	return a;
	else 
	return b;
}
int main()
{

	int n,i,len;
		char a[200],b[200],x[210]={0};
	int c[200]={0},d[200]={0},p[300];
	cin>>n>>a>>b;
/*	scanf("%d",&n);
//getchar();
	getchar(); 
	gets(a);
	gets(b);*/
	len =strlen(a);
	for( i=0;i<len;i++)//将位序颠倒 
	if(a[i]>='a'&&a[i]<='z')
	 c[len-i]=a[i]-87;
	else 
	c[len-i]=a[i]-48;
	len=strlen(b);
	for( i=0;i<len;i++)
	if(b[i]>='a'&&b[i]<='z') 
	d[len-i]=b[i]-87;
	else 
	d[len-i]=b[i]-48;	
	len=max(strlen(a),strlen(b));
	for(int i=1;i<=len;i++)
	{
		p[i]+=c[i]+d[i];
		p[i+1]=p[i]/n;
		p[i]%=n;
	}
	if(p[len+1])
	 len++;//最多进一位 
	for( i=len;i>0;i--)
	if(p[i]<=9)
	 	cout<<char(c[i]+48);
	else 
		cout<<char(c[i]+87);
	return 0;
}
