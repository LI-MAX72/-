#include<stdio.h>
int main()
{
	int x[9],a,b,c,p=0;
	int i,j;
//	for(i=0;i<9;i++)
//	x[i]=i+1;
	int t=0;
	for(a=123;a<333;a++)
	{
		b=2*a;
		c=3*a;
		x[0]=a/100;
		x[1]=a%100/10;
		x[2]=a%10;
		x[3]=b/100;
		x[4]=b%100/10;
		x[5]=b%10;
		x[6]=c/100;
		x[7]=c%100/10;
		x[8]=c%10;
		for(i=0;i<9;i++)
		t+=x[i];
		//printf("%d\n",t);
		for(i=0;i<9;i++)
			for(j=i+1;j<9;j++)
				if(x[i]==x[j])
					p=1;
		if(t==45&&p!=1)
		printf("%d %d %d\n",a,b,c);
		t=0;
		p=0;
	}
	return 0;
}
