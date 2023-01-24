#include<stdio.h>
void fun(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
int main()
{
	int i,j,b;
	int n,m,a[5000][2];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d%d",&a[i][0],&a[i][1]);
	for(i=0;i<n;i++)
		for(j=1;j<n;j++)
		{
			if(a[j-1][1]<a[j][1])
			{
				fun(&a[j-1][1],&a[j][1]);
				fun(&a[j-1][0],&a[j][0]);
			}
			else if(a[j-1][1]==a[j][1])
				if(a[j-1][0]>a[j][0])
				{
					fun(&a[j-1][1],&a[j][1]);
					fun(&a[j-1][0],&a[j][0]);	
				}
		}
	b=1.5*m;
	i=b;
	while(a[i][1]==a[i-1][1])
		i++;
	b=i;
	printf("%d %d\n",a[b-1][1],b);	
	for(i=0;i<b;i++)
		printf("%d %d\n",a[i][0],a[i][1]);
	return 0;
	
	
}
