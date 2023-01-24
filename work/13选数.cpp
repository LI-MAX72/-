#include<stdio.h>//要重新理解dfs 
static int n,k;
static int a[25];
static long long ans;

int fun(int a){
	if(a==0||a==1)
	return 0;
    for(int i = 2;i * i <= a; i++)
        if(a % i == 0)
            return 0;
    return 1;
}

void fun1(int m, int sum, int p){
    if(m == k){
        if(fun(sum))
            ans++;
        return ;
    }
    for(int i = p; i < n; i++)
        fun1(m + 1, sum + a[i], i + 1);
}

int main(){
    scanf("%d%d",&n,&k);
    for(int i = 0; i < n; i++)
        scanf("%d",&a[i]);
    fun1(0,0,0);
    printf("%d",ans);
    return 0;
}

