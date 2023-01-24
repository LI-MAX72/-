#include<stdio.h>
int main()
{
	int n,i,j,p,q,flag=1,k;
	char a[100][100],b[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		//getchar();在Linux下需要两个getchar()来吸收回车键 
		getchar();
		for(j=0;j<n;j++)
			scanf("%c",&a[i][j]);
	}
		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			b[i][j]='*';
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(a[i][j]=='y')
			{
			//	flag=0;
				for(p=-1;p<=1;p++)
				for(q=-1;q<=1;q++)
					if(a[i+p][j+q]=='i'&&a[i+2*p][j+2*q]=='z'&&a[i+3*p][j+3*q]=='h'&&a[i+4*p][j+4*q]=='o'&&a[i+5*p][j+5*q]=='n'&&a[i+6*p][j+6*q]=='g')
					//if(a[i][j+1]=='i'&&a[i][j+2]=='z'&&a[i][j+3]=='h'&&a[i][j+4]=='o'&&a[i][j+5]=='n'&&a[i][j+6]=='g')
					{
						flag=0;
						for(k=0;k<=6;k++)
						b[i+k*p][j+k*q]=a[i+k*p][j+k*q];
					}	
						}			
		}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%c",b[i][j]);
			printf("\n"); 
		}	
	//printf("%d",flag);			
	return 0;
}
