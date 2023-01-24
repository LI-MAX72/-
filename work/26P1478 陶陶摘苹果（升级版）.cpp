#include<stdio.h>
void change(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
	return;
}
int main()
{
	int i,j,t,n,s,a,b,ans=0;
	int x[5000]={0},y[5000]={0};
	scanf("%d%d%d%d",&n,&s,&a,&b);
	for(i=0;i<n;i++)
		scanf("%d%d",&x[i],&y[i]);
	for(j=0;j<n;j++)
	for(i=1;i<n;i++)
	{
		if(y[i-1]>y[i])
		{
			change(&y[i-1],&y[i]);
			change(&x[i-1],&x[i]);
		}
	}
	for(i=0;i<n;i++)
	{
		if(s-y[i]<0)
		break;
		else if(s-y[i]>=0&&x[i]<=a+b)
		{
			ans++;
			s-=y[i];
		}
		else if(s-y[i]>=0&&x[i]>a+b)
		continue;
	}
	printf("%d",ans);
}
