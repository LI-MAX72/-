#include<stdio.h>
#include<math.h> 
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	//i=exp(log(n)/m);
	//while(pow(i,m)<=n)
	//i++;
	printf("%.0f",pow(n,1.0/m));
	return 0;
}
/*int n,m;
int main()
{
    scanf("%d%d",&n,&m);
    printf("%.0f",pow(n,1.0/m));
    return 0;
}*/
