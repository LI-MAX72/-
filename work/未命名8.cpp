#include<cstdio>
#include<algorithm>
#define N (50000+10) 
using namespace std;
int a[N];
int d,n,m,ans;
bool judge(int x){//�����Ƽ�дjudge���ȽϹ淶�Ƚϱ�׼�����׼��
    int tot=0,i=0,now=0;//tot��ʾ��Ҫ���ߵ�ʯ��������i��ʾ�ҵ�ʯͷ��now��ʾ��վ����һ��ʯͷ��
    while (i<n+1){
        i++;
        if (a[i]-a[now]<x){//�������С���Ҷ��ֵĴ�x����ô���ʯͷ��Ҫ����
            tot++;
        } 
        else{
            now=i;//��Ȼ�Ҿ�������
        }
    }
    if (tot>m) return false;//���Ҫ���ߵ�ʯͷ����m�飬��ô�����̫����
    else return true;
}
int main(){
    scanf("%d%d%d",&d,&n,&m);
    for (int i=1;i<=n;i++) scanf("%d",&a[i]);
    a[n+1]=d; 
    int l=1,r=d,mid;
    while (l<=r){//����˵���Ƕ��ֵĸ�ʽ��
        mid=(l+r)/2;
        if (judge(mid)){
            ans=mid;
            l=mid+1;
        } 
        else r=mid-1;
    }
    printf("%d",ans);
}
