#include<stdio.h>
int main()
{
	int i,a[12],x=0;
	float m=0;
	for(i=0;i<12;i++)
	scanf("%d",&a[i]);
	for(i=0;i<12;i++)
	{
		x+=300;
		x-=a[i];
		if(x<0)
		{
			printf("%d",-i-1);
			return 0;
		}
		else
		{
			m+=(x/100)*100;
			x%=100;
			//printf("%f %d %d\n",m,x,i);
		}
	}
	m=m*1.2;
	printf("%.0f",m+x);
	return 0;
}
