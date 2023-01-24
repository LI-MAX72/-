#include<stdio.h>
int main()
{
	int a[40][40]={0},n,i,p,q,j;
	scanf("%d",&n);
	a[0][n/2]=1;
	p=1;
	q=n/2+1;
	for(i=2;i<=n*n;i++)
	{
		if(p==1&&q!=n)
		{
			a[n-1][q]=i;
			p=n;
			q++;
			}	
		else if(p!=1&&q==n)
		{
				a[p-2][0]=i;
				p--;
				q=1;
		}
		else if(p==1&&q==n)
		{
			a[p][q-1]=i;
			p++;
			}	
			
		else 
		{
			if(a[p-2][q]==0)
			{
				a[p-2][q]=i;
				p--;
				q++;
			}
			else
			{
				a[p][q-1]=i;
				p++;
			}
		}
		
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
}
