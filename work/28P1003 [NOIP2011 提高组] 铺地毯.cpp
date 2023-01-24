#include<stdio.h>
int main()
{
	int n,a[10000]={0},b[10000]={0},g[10000]={0},k[10000]={0};
	int i,ans=-1;
	int x,y;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d%d",&a[i],&b[i],&g[i],&k[i]); 
	}
	scanf("%d%d",&x,&y);
	for(i=0;i<n;i++)
		if(x>=a[i]&&x<=a[i]+g[i]&&y>=b[i]&&y<=b[i]+k[i])
		ans=i+1;
	printf("%d",ans);
	return 0;
}
