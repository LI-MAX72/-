#include<stdio.h>
int fun(int n)
{
	int i;
	if(n==2||n==3)
	return 1;
	for(i=2;i*i<=n;i++)
	{
		if(n%i!=0)
		continue;
		else
		return 0;
	}
	return 1;
}
int main()
{
	int i=1,l,a[100000],b=0,k=0;
	scanf("%d",&l);
	while(b<=l)
	{
		i++;
		if(fun(i)==1)
		{
			a[k]=i;
			b+=a[k];
			k++;	
		}
		else
		continue;
	}

	for(i=0;i<k-1;i++)
	{
		printf("%d\n",a[i]);
	
	}
	printf("%d",k-1);

	return 0;
	}
	

