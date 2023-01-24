#include<cstdio>
#include<algorithm>
#define N (50000+10) 
using namespace std;
int a[N];
int d,n,m,ans;
bool judge(int x){//二分推荐写judge，比较规范比较标准，容易检查
    int tot=0,i=0,now=0;//tot表示需要搬走的石块数量，i表示找的石头，now表示我站在哪一块石头上
    while (i<n+1){
        i++;
        if (a[i]-a[now]<x){//如果距离小于我二分的答案x，那么这块石头需要搬走
            tot++;
        } 
        else{
            now=i;//不然我就跳过来
        }
    }
    if (tot>m) return false;//如果要搬走的石头多于m块，那么这个解太大了
    else return true;
}
int main(){
    scanf("%d%d%d",&d,&n,&m);
    for (int i=1;i<=n;i++) scanf("%d",&a[i]);
    a[n+1]=d; 
    int l=1,r=d,mid;
    while (l<=r){//可以说算是二分的格式吧
        mid=(l+r)/2;
        if (judge(mid)){
            ans=mid;
            l=mid+1;
        } 
        else r=mid-1;
    }
    printf("%d",ans);
}
