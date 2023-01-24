#include<stdio.h>
void fun(int *a,int i)
{
	int j;
	for(j=0;j<(i+1)/2;j++)
	{
		a[i]+=a[j];
	}
	a[i]++;
}
int main()
{
	int a[1000]={0};
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n/2;i++)
	fun(a,i);
	for(i=0;i<n/2;i++)
	a[n-1]+=a[i];
	printf("%d",a[n-1]+1);
//	for(i=0;i<n/2;i++)
//	printf("%d\n",a[i]);
 } 
