#include<stdio.h>
int n;
int f[1001];
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
	{ 
        for(int j=1;j<=i/2;j++)
            f[i]+=f[j];
        f[i]++; 
    }
    printf("%d",f[n]);
    return 0;
}
