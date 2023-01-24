#include<stdio.h>
int main()
{
	char a[20];
	int b[10],ans=0,i=0,j=0;
	char ch;
	gets(a);
	/*while(a[i]!='\0')
	{
		if(a[i]=='-')
			{
			
				i++;
				continue;
			}
		else
		{b[j]=a[i]+0-'0';
				i++;
				j++;
			}	
		
	
	}*/
	for(i=0,j=0;i<1,j<1;j++,i++)
	b[j]=a[i]+0-'0';
		for(i=2,j=1;i<5,j<4;j++,i++)
	b[j]=a[i]+0-'0';
	for(i=6,j=4;i<11,j<9;j++,i++)
	b[j]=a[i]+0-'0';
	for(i=0;i<9;i++)
	ans+=b[i]*(i+1);
		
	ans=ans%11;
	if(ans==10)
	ch='X';
//printf("%d",b[9]);
	if(ans==a[12]-'0'||a[12]=='X')
	printf("Right\n");
	else 
	{
		if(ans==10)
		a[12]=ch;
		else
		a[12]=ans+'0';
		puts(a);
	}
	
	return 0;
 } 
