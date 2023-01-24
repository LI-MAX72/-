#include<stdio.h>//´íÎóµÄ 
int fun(int (*a)[6],int n,int m)
{
	int i,j,ans=0,p,q;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			for(p=0;p<n;p++)
				for(q=0;q<m;q++)
					{
						if((p==i&&q==j)||(p==i&&q==j-1)||(p==i&&q==j+1)||(p==i-1&&q==j)||(p==i-1&&q==j-1)||(p==i-1&&q==j+1)||(p==i+1&&q==j)||(p==i+1&&q==j-1)||(p==i+1&&q==j+1))
						continue;
						else
							if(a[i][j]+a[p][q]>ans)
							ans=a[i][j]+a[p][q];
					}
		}
	return ans;
}
int main()
{
	int i,t,a[20][6][6],n[20],m[20];
	int j,k;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&n[i],&m[i]);
		for(j=0;j<n[i];j++)
			for(k=0;k<m[i];k++)
				scanf("%d",&a[i][j][k]);
		printf("%d\n",fun(a[i],n[i],m[i]));
	}
}
