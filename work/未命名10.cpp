#include<stdio.h>
static int a,b;
void fun(int *a,int*b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
	
}
int main()
{
	
	a=3;
	b=5;
	fun(&a,&b);
	printf("%d %d",a,b);
}
