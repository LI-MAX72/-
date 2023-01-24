#include<stdio.h>
#include<string.h>
static int ans=0,len,n;

int f(int a[]) 
{
	int ln = len;
	int i = 1;
	int j = len;
	while(ln--)
	{
		if(ln < len / 2)
		{
			break;
		}
		if(a[i] != a[j])
		{
			return 0;
		}
		i++;
		j--;
	}
	return 1;
}
void fun(int *c)
{
	
	ans++;
	if(ans>30)
	{
		printf("Impossible!");	
		return;
	}
	
	int i;
	int b[200],d[200]={0};
	for(i=1;i<=len;i++)
	{
		b[i]=c[len-i+1];
		//	printf("%d",b[i]);
			
		}
/*	printf("\n");
for(i=1;i<=len;i++)	
	printf("%d",c[i]);
		printf("\n");*/	
	for(int i=1;i<=len;i++)
	{
		d[i]+=c[i]+b[i];
		d[i+1]=d[i]/n;
		d[i]%=n;
	}
	if(d[len+1]>0)
	 len++;
/*	for(int i=1;i<=len;i++)
		printf("%d",d[i]);
	printf(" %d",len);
	printf("\n");*/
	if(f(d)==1)
	return ;
	else
	fun(d);

	
}
int main()
{

	char a[200];
	int c[200],i;
	scanf("%d",&n);
	scanf("%s",a);
		len=strlen(a);
	if(n>=2&&n<=10)
	for(i=1;i<=len;i++)
	{
		c[i]=a[len-i]-48;
	//	printf("%d",c[i]);
		}
	else if(n==16)
	for(i=1;i<=len;i++)
	{
		if(a[len-i]>='1'&&a[len-i]<='9')
			c[i]=a[len-i]-48;
		else
			c[i]=a[len-i]-'A'+10;
			}

	fun(c);
	if(ans<=30)
	printf("STEP=%d",ans);
	return 0;
}
