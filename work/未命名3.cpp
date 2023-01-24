#include<stdio.h>
#include<string.h>
char a[200],b[200];
int k[1005];
char a[27][27]={
{"abcdefghijklmnopqrstuvwxyz"}, 
{"zabcdefghijklmnopqrstuvwxy"},
{"yzabcdefghijklmnopqrstuvwx"},
{"xyzabcdefghijklmnopqrstuvw"},
{"wxyzabcdefghijklmnopqrstuv"},
{"vwxyzabcdefghijklmnopqrstu"},
{"uvwxyzabcdefghijklmnopqrst"},
{"tuvwxyzabcdefghijklmnopqrs"},
{"stuvwxyzabcdefghijklmnopqr"},
{"rstuvwxyzabcdefghijklmnopq"},
{"qrstuvwxyzabcdefghijklmnop"},
{"pqrstuvwxyzabcdefghijklmno"},
{"opqrstuvwxyzabcdefghijklmn"},
{"nopqrstuvwxyzabcdefghijklm"},
{"mnopqrstuvwxyzabcdefghijkl"},
{"lmnopqrstuvwxyzabcdefghijk"},
{"klmnopqrstuvwxyzabcdefghij"},
{"jklmnopqrstuvwxyzabcdefghi"},
{"ijklmnopqrstuvwxyzabcdefgh"},
{"hijklmnopqrstuvwxyzabcdefg"},
{"ghijklmnopqrstuvwxyzabcdef"},
{"fghijklmnopqrstuvwxyzabcde"},
{"efghijklmnopqrstuvwxyzabcd"},
{"defghijklmnopqrstuvwxyzabc"},
{"cdefghijklmnopqrstuvwxyzab"},
{"bcdefghijklmnopqrstuvwxyza"},
};//将转换式打入数组中 
int main()
{
	int n1,n2;
    scanf("%s%s",c2,c1);//输入字符串 
    n1=strlen(c1);n2=strlen(c2);//取两个字符串的长度 
    //cout<<n2;
    for(int i=0;i<n1;i++)
    {
        if(c1[i]>='A' && c1[i]<='Z')
        {
            c1[i]=c1[i]-'A'+'a';//将明文转化为小写 
            k[i]=1;//如果它为大写，标注一下，方便输出 
        }
    }
    for(int i=0;i<n2;i++)
    {
        if(c2[i]>='A' && c2[i]<='Z')
        {
            c2[i]=c2[i]-'A'+'a';//将密文转化为小写
        }
    }
    for(int i=0;i<n1;i++)
    {
        int s=i%n2;//注意，这块要对 n2 求余，要不然当明文M的长度大于密钥k的长度时，将密钥就不能被重复使用了 
        int a1=c1[i]-'a';//计算列数 
        int a2=c2[s]-'a';//计算行数 
        if(k[i]==1)
        {
        	printf("%c",a[a2][a1]-'a'+'A');//特判，如果前面标注了，再将其转化为大写 
		}
		else
		{
			printf("%c",a[a2][a1]);//如果没有标注，就直接小写输出 
		}
    }
	return 0;//`-`
}

