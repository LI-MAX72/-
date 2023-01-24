#include<stdio.h>
int main()
{
	int n,n1,n2,i,j,ans1=0,ans2=0;
	int key[5][5]={
	{0,0,1,1,0},
	{1,0,0,1,0},
	{0,1,0,0,1},
	{0,0,1,0,1},
	{1,1,0,0,0}
	};
	int a[200],b[200];
	scanf("%d%d%d",&n,&n1,&n2);
	for(i=0;i<n1;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n2;i++)
		scanf("%d",&b[i]);
	for(i=0;i<n;i++)
	{
		ans1+=key[a[i%n1]][b[i%n2]];
		ans2+=key[b[i%n2]][a[i%n1]];
	}
	printf("%d %d",ans1,ans2);
	return 0;
 } 
