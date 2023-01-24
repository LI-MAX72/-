#include<stdio.h>
int main()
{
	int i,a[7],b[7],c[7],p=0,q=0;
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
		scanf("%d",&b[i]);
		c[i]=a[i]+b[i];
		
	}
	for(i=0;i<7;i++)
	{
		if(c[i]<=8)
		c[i]=0;

	}
	for(i=0;i<7;i++)
{
	//printf("%d ",c[i]);
		if(q<c[i])
	{q=c[i];
	p=i;
	}
	//printf("%d ",p+1);
}

	if(q!=0)
	printf("%d",p+1);
	else
	printf("0");
	return 0;
}
