#include<stdio.h>
static int k=0;	
static int n,m,i,j,c,d;
static 	char a[100][100];
void fun(int i,int j)
{
	a[i][j]='.';
	int c,d;
	for(c=-1;c<=1;c++)
		for(d=-1;d<=1;d++)
			if(i+c>=0&&i+c<=n&&j+d>=0&&j+d<m&&a[i+c][j+d]=='W')
				{
					fun(i+c,j+d);
				}
	return ;
}
int main()
{

	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%s",a[i]);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			if(a[i][j]=='W')
			{
				k++;
				
				fun(i,j);
			}	
		}
	printf("%d\n",k);


}
