#include<stdio.h>	
int a[10001][101]={0};
	int b[10001][101]={0};
int main()
{
	int i,j;
	int n,m;
	int ans=0;
	int p;
	int q=0;

	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{	q=0;
		for(j=0;j<m;j++)
	{
		scanf("%d%d",&a[i][j],&b[i][j]);
		if(a[i][j]==1)
		q++;
	}
		b[i][m]=q;
		}	
	scanf("%d",&p);
	for(i=0;i<n;i++)
	{
		q=0;
		ans+=b[i][p];
		ans%=20123;
		for(j=p;j<=m;j++)
		{	
			if(j==m)
			j=0;	
			if(a[i][j]==1)
			q++;
			if(q==(b[i][p]-1)%b[i][m]+1 )//�п���Ҫת�ü�Ȧ����1+1�Ƿ�ֹ1������ 
			/*������ֱ���һ�����е���¥�ݵķ�����������࣬��ģһ��

д���ǣ�

	if(mb>mclts[i])
    		mb=(mb-1)%mclts[i]+1;*/

			{
				p=j;
			
				break;
			}

		}
	
	}

	printf("%d",ans);	
	return 0;
}
