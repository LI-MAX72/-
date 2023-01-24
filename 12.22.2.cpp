#include<stdio.h>
int main()
{
	long long a,c,p,q,r,x,t;
	scanf("%lld",&a);
	scanf("%lld",&c);
	scanf("%lld",&p);
	scanf("%lld",&q);
	scanf("%lld",&r);
	scanf("%lld",&x);
	if(a>c)
	t=a+x/r;
	if(a<=c)
		if(c-a>x/p)
			t=a+x/p;
		else if(c-a<x/p&&(c-a)*p+q>x)
			t=c;
		else if((c-a)*p+q<x)
			t=c+(x-(c-a)*p-q)/r;
	printf("%lld",t);
	return 0;
}
