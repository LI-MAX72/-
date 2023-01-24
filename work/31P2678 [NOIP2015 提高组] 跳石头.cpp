#include<stdio.h>
static int a[50005];
int all,m,n,ans,l;
int func(int mid)
{
	int all=0,i=0,now=0;
	while(i<n+1)
	{
		i++;
		if(a[i]-a[now]<mid)
		all++;
		else
		now=i;
	}
	if(all>m)
	return 0;
	else
	return 1;
}

int main()
{
	int i,mid,d=1,r;
	scanf("%d%d%d",&l,&n,&m);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	a[n+1]=l;
	r=l;
	while(d<=r)
	{
		mid=(d+r)/2;//拿一半作为二分 
        if (func(mid))
		{
            ans=mid;
            d=mid+1;
        } 
        else r=mid-1;
    
	}
	printf("%d",ans);
	return 0;
 } 
