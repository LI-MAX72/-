#include<stdio.h>
#include<string.h>

int main()
{
	int i=0,p1,p2,p3,j,k,q=0;
	char a[500]={0},p;
	scanf("%d%d%d%s",&p1,&p2,&p3,a);
	while(a[i]!='\0')
	{
		if(a[i]=='-'&&(a[i+1]>a[i-1])&&((a[i-1]>='0'&&a[i+1]<='9')||(a[i-1]>='a'&&a[i+1]<='z')))
		{
			if(p3==1)
			for(j=a[i-1]+1;j<a[i+1];j++)
			{
				p=j;
				if(p1==1)
				p=j;
				else if(p1==2)
					p=(p>='a')?p-32:p;
				else if(p1==3)
				p='*';
				for(k=0;k<p2;k++)
				printf("%c",p);
			}
			else
				for(j=a[i+1]-1;j>a[i-1];j--)
			{
				p=j;
				if(p1==1)
				p=j;
				else if(p1==2)
					p=(p>='a')?p-32:p;
				else if(p1==3)
				p='*';
				for(k=0;k<p2;k++)
				printf("%c",p);
			}
				
		}	
		else
		printf("%c",a[i]);
		i++;
	}	

	return 0;
 } 
