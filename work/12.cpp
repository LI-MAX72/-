#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void fun(char *arr,char *str,int index)
{
	int lens, size, lena,j;



	
	
	lena = strlen(arr);//被插入字符串个数
	lens = strlen(str);//要插入字符串个数
	size =lens;//一共要挪动的size次数
	//用另一个一个变量，来代替这个变量
	int indexx = index;
	for (int i = 0; i < size; i++) {
		for (j = lena; j > indexx; j--) {
			arr[j] = arr[j - 1];//前一个位置给后一个赋值
		}
		//以为已经挪动位置了，所以indexx和lena都要加1,才能保证第二次第二个for能循环lena-index次
		//因为要挪动的是index后面的字母
		lena++;
		indexx++;
	}
	arr[lena] = '\0';//结束字符串
	//最后给插入str
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
