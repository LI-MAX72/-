#include<stdio.h>
static int i=0;
static int a[1001]={0};
int fun(int n)
{
	int j;
//	if(n/2==0)
	//	i++;
	//else
	{
		i+=n/2;
		for(j=n/2;j>0;j--)
		fun(j);
	}
}
int fun1(int n)
{
	int j,k;
	
	for(j=2;j<n/2;j++)
	for(k=0;k<j;k++)
	a[j]+=a[k];
	for(j=0;j<n/2;j++)
	i+=a[j];
	for(j=0;j<n/2;j++)
	printf("%d\n",a[j]);
	return i;
	
}
int main()
{
	int n;
	a[0]=1;
	a[1]=2;
	scanf("%d",&n);
	fun(n);
//	printf("%d\n",i+1);
	printf("%d",fun1(n));
	return 0;
 } 
