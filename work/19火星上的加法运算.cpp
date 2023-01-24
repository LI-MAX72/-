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
	int n,i,len;
	char a[200],b[200],x[210]={0};
	int c[200]={0},d[200]={0},p[300];
	scanf("%d",&n);
	///getchar();
	getchar(); 
	gets(a);
	gets(b);
	//printf("%d %d\n",a[0],strlen(b));
/*	if(strlen(a)>=strlen(b))
	{
		len=strlen(a);
		for(i=0;i<strlen(b);i++)
		{
			b[i+strlen(a)-strlen(b)]=b[i];
			
			}	for(i=0;i<strlen(b)-strlen(a)+1;i++)
			b[i]='0';
	}
	else
	{
		len=strlen(b);
		for(i=0;i<strlen(a);i++)
			a[i+strlen(b)-strlen(a)]=a[i];//
			
		for(i=0;i<strlen(b)-strlen(a)+1;i++)
			a[i]='0';	
			
	}*/
//	printf("\n%d\n",len); 
//	for(i=0;i<len;i++)
//	printf("%c",a[i]);
//puts(a);
//	puts(b);
/*	i=0;
	while(a[i]!='\0')
	{
		if(a[i]>='0'&&a[i]<='9')
			c[i]=a[i]-48;
		else if(a[i]>='a'&&a[i]<='z')
			c[i]=a[i]-87;
//		printf("%d",c[i]);
		i++;
		
	}
//		printf("\n");
	i=0;
//	puts(b);
	while(b[i]!='\0')
	{
		if(b[i]>='0'&&b[i]<='9')
			d[i]=b[i]-48;
		else if(b[i]>='a'&&b[i]<='z')
			d[i]=b[i]-87;
	
		i++;
	}
	*/
	len =strlen(a);
	for( i=0;i<len;i++)
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
	
	for(i=0;i<len;i++)
	{
		p[i]=c[i]+d[i];//printf("%d ",p[i]);
			

	
	}
	
/*	len=i-1;
	while(p[0]>n)
	{
		for(i=len;i>=0;i--)
			p[i+1]=p[i];
		len++;
			}*/
//	printf("%d",len);		
//	for(i=0;i<=len;i++)
//	printf("\n%d\n",p[i]);
	len=max(strlen(a),strlen(b));	
	for(i=0;i<len;i--)
		if(p[i]>n-1)
		  {
		  	p[i+1]+=p[i]/n;
		  	p[i]%=n;
		  }
		//for(i=0;i<=len;i++)
//printf("%d ",p[i]);
	
	for(i=0;i<=len;i++)
	{
		if(p[i]>=0&&p[i]<=9)
		{
			printf("%c",p[i]+48);
			}	
		else if(p[i]>=10&&p[i]<=35)
			printf("%c",p[i]+87);
		
	}
//	x[i+1]='\0';
//printf("\n");
	//for(i=0;i<=len;i++)
//	printf("%c",p[0]+87);
	return 0;
}
