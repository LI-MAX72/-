#include<stdio.h>	
long long int a[1000050];
int main()
{
	long long int n,m,i,j,max,min,mid,all,q;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	all=max=min=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	q=max;
	/*while(min<=max)
	{
		all=0;
		mid=(max+min)/2;
		for(i=0;i<n;i++)
		{
			if(mid<a[i])
			all+=a[i]-mid;
		}
		if(all>=m)
		min=mid+1;
		else
		max=mid-1;	
	}*/
	while(q)
	{
		all=0;
			for(i=0;i<n;i++)
		{
			if(q<a[i])
			all+=a[i]-q;
	}
	if(all<m)
	q--;
	else
	break;
	 } 
	printf("%lld",q);
	return 0;
}
