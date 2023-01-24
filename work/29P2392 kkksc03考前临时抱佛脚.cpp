#include<stdio.h>//0/1背包的典型算法 
static int f[3000];
void fun(int sum)
{
	int j;
	for(j=1;j<=sum/2;j++)
		f[j]=0; 
}
int max(int a,int b)
{
	if(a>=b)
		return a;
	else
		return b;
}
int main()
{
	int i,j,s[4],k,t=0;
	int a[21],sum=0;
	for(i=0;i<4;i++)
	scanf("%d",&s[i]);
	for(i=0;i<4;i++)
	{
		sum=0;
		for(j=1;j<=s[i];j++)//下标一致 
		{
			scanf("%d",&a[j]);
			sum=sum+a[j];
		}
		for(j=1;j<=s[i];j++)
			for(k=sum/2;k>=a[j];k--)
			{f[k]=max(f[k],f[k-a[j]]+a[j]);
			printf("f[%d]=%d\n",k,f[k]);
			}	//0/1背包 (跟DP好像） 
		t=t+sum-f[sum/2];//printf("%d\n",t); 
		fun(sum);
	}	
	printf("%d",t);
	return 0;
}
