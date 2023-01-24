#include<stdio.h>
int main()
{
	int a[3],i,j,t;
	char b[4];
	for(i=0;i<3;i++)
		scanf("%d",&a[i]);
	

	for(i=0;i<3;i++)
		for(j=1;j<3;j++)
			{
				if(a[j-1]>a[j])
				{
					t=a[j-1];
					a[j-1]=a[j];
					a[j]=t;
					
				}
			}
	scanf("%s",b);
for(j=0;j<3;j++)
	{
	switch (b[j])
		{
		case 'A':
			printf("%d ", a[0]);
			break;
		case 'B':
			printf("%d ", a[1]);
			break;
		case 'C':
			printf("%d ", a[2]);
			break;
	}
}
	return 0;
}
