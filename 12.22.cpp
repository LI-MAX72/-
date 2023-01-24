#include<stdio.h>
int main()
{
	int i,j,n,a[100],p=0,t,k,b[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		for(j=1;j<n;j++)
		if(a[j]<a[j-1])
			{
				t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
	//for(i=0;i<n;i++)
	//	printf("%d ",a[i]);
	//puts("\n");
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			for(k=j+1;k<n;k++)
				if(a[i]+a[j]==a[k]&&b[k]==0)
				{
					p++;
					b[k]++;
				}
				else if(a[i]+a[j]<a[k])
				break;
	printf("%d",p);				
	return 0;
}
