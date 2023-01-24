#include<stdio.h>
static int i=0;
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
int main()
{
	int n;
	scanf("%d",&n);
	fun(n);
	printf("%d",i+1);
	return 0;
 } 
