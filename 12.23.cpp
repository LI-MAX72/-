#include<stdio.h>
int fun(long long p)
{
	long long i;
	for(i=2;i*i<=p;i++)
		if(p%i==0)
			return 0;
	return 1;
}
int main()
{
	long long n,a,b,c;
	scanf("%lld",&n);
	for(a=2;a<n/3;a++)
	{
		if(fun(a)==1)
			for(b=2;b<n/2;b++)
			{
				if(fun(b)==1)
					c=n-a-b;
				if(fun(c)==1)
				{
					printf("%lld %lld %lld",a,b,c);
					return 0;
				}
						
			}
	}
	//printf("%d",fun(2));
	return 0;
 } 
