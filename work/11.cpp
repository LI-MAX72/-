#include<stdio.h>
int main()
{
	int n,a[100000],i,p,j,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	p=n;
	for(i=0;i<n;i++)
		for(j=1;j<n;j++)
		{
			if(a[j-1]>a[j])
			{
				t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
		}
	for(i=1;i<p;i++)
		if(a[i-1]==a[i])
			{
				p--;
				for(j=i;j<p;j++)
				a[j]=a[j+1];
				i--;
			}
	printf("%d\n",p);
	for(i=0;i<p;i++)
		printf("%d ",a[i]);
	return 0;	
}
