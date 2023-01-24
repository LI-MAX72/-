#include<stdio.h>
int n,m,x[150],l[150][10010];
int main()
{
 scanf("%d",&n);
 scanf("%d",&m);
 for(int i=1;i<=n;i++)
   scanf("%d",&x[i]);
 for(int i=0;i<=n;i++)
   l[i][0]=1; 
 for(int i=1;i<=n;i++)
   for(int j=1;j<=m;j++)
   {
   	
   	if(j>=x[i])
   	  l[i][j]+=l[i-1][j-x[i]];
	l[i][j]+=l[i-1][j];
   }
 printf("%d",l[n][m]);
 return 0;
}
