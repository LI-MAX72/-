#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void fun(char *arr,char *str,int index)
{
	int lens, size, lena,j;



	
	
	lena = strlen(arr);//�������ַ�������
	lens = strlen(str);//Ҫ�����ַ�������
	size =lens;//һ��ҪŲ����size����
	//����һ��һ���������������������
	int indexx = index;
	for (int i = 0; i < size; i++) {
		for (j = lena; j > indexx; j--) {
			arr[j] = arr[j - 1];//ǰһ��λ�ø���һ����ֵ
		}
		//��Ϊ�Ѿ�Ų��λ���ˣ�����indexx��lena��Ҫ��1,���ܱ�֤�ڶ��εڶ���for��ѭ��lena-index��
		//��ΪҪŲ������index�������ĸ
		lena++;
		indexx++;
	}
	arr[lena] = '\0';//�����ַ���
	//��������str
	int k = 0;
	for (int j = index,k=0; j < index + lens; j++,k++) {
		arr[j] = str[k];
	}



}
int main()
{
	int p,q,x,i,a=0,b=0,k=0,j;
	char str[100],s[100][100];
	scanf("%d%d%d",&p,&q,&x);
	getchar();
	gets(str);
	b=strlen(str);
	for(i=0;i<b;i++)
	{
		if(str[i]='-')
			if(str[i-1]-str[i+1]<0)
				if(str[i+1]-str[i-1]==1)
					{
						b--;
						for(j=i;j<b;j++)
							str[j]=str[j+1];
					}
				else 
				{
					if(p==1&&x==1)
					{
						for(j=0,k=0,a=0;j<(str[j+1]-str[j-1]);j++)
						{
							s[i][j]=str[j-1]+k;
							a++;
							if(a%q==0)
							k++;
						}
						fun(str,s[i],str[i]);
						puts(s[i]);
					}
				}
	}
	
	puts(str);
	return 0;
}
