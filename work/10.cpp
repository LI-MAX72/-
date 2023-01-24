#include<stdio.h>
static int n,a[300][3],b[300][2],i,j,t;
void fun(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
	
}
int main()
{
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
		b[i][0]=i+1;
		b[i][1]=a[i][0]+a[i][1]+a[i][2];
		}	
	for(i=0;i<n;i++)
		for(j=1;j<n;j++)
		{
			if(b[j-1][1]<b[j][1])
			{
				t=b[j-1][1];
				b[j-1][1]=b[j][1];
				b[j][1]=t;
				t=b[j-1][0];
				b[j-1][0]=b[j][0];
				b[j][0]=t;
				fun(&a[j-1][0],&a[j][0]);
				fun(&a[j-1][1],&a[j][1]);
				fun(&a[j-1][2],&a[j][2]);
			}
			else if(b[j-1][1]==b[j][1])
			{
				if(a[j-1][0]<a[j][0])
				{
					t=b[j-1][1];
					b[j-1][1]=b[j][1];
					b[j][1]=t;
					t=b[j-1][0];
					b[j-1][0]=b[j][0];
					b[j][0]=t;	
							fun(&a[j-1][0],&a[j][0]);
				fun(&a[j-1][1],&a[j][1]);
				fun(&a[j-1][2],&a[j][2]);
				}
				else if(a[j-1][0]==a[j][0])
				{
					if(b[j-1][0]>b[j][0])
					{
					t=b[j-1][1];
					b[j-1][1]=b[j][1];
					b[j][1]=t;
					t=b[j-1][0];
					b[j-1][0]=b[j][0];
					b[j][0]=t;
						fun(&a[j-1][0],&a[j][0]);
				fun(&a[j-1][1],&a[j][1]);
				fun(&a[j-1][2],&a[j][2]);
				}
				}
			}
		}
	//	printf("\n");
	for(i=0;i<5;i++)
	printf("%d %d\n",b[i][0],b[i][1]);
	return 0;
}
