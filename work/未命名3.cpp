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
};//��ת��ʽ���������� 
int main()
{
	int n1,n2;
    scanf("%s%s",c2,c1);//�����ַ��� 
    n1=strlen(c1);n2=strlen(c2);//ȡ�����ַ����ĳ��� 
    //cout<<n2;
    for(int i=0;i<n1;i++)
    {
        if(c1[i]>='A' && c1[i]<='Z')
        {
            c1[i]=c1[i]-'A'+'a';//������ת��ΪСд 
            k[i]=1;//�����Ϊ��д����עһ�£�������� 
        }
    }
    for(int i=0;i<n2;i++)
    {
        if(c2[i]>='A' && c2[i]<='Z')
        {
            c2[i]=c2[i]-'A'+'a';//������ת��ΪСд
        }
    }
    for(int i=0;i<n1;i++)
    {
        int s=i%n2;//ע�⣬���Ҫ�� n2 ���࣬Ҫ��Ȼ������M�ĳ��ȴ�����Կk�ĳ���ʱ������Կ�Ͳ��ܱ��ظ�ʹ���� 
        int a1=c1[i]-'a';//�������� 
        int a2=c2[s]-'a';//�������� 
        if(k[i]==1)
        {
        	printf("%c",a[a2][a1]-'a'+'A');//���У����ǰ���ע�ˣ��ٽ���ת��Ϊ��д 
		}
		else
		{
			printf("%c",a[a2][a1]);//���û�б�ע����ֱ��Сд��� 
		}
    }
	return 0;//`-`
}

