#include<stdio.h>
#include<string.h>
char a[2][30];

int main()
{
	char s[1000]={0};
	memset(a,0,sizeof(a));
	gets(s);
	int l=strlen(s);
	int i,j=0,k=0;
	a[0][0]=s[0];
	a[1][0]++;
	int la=1;
	for(i=1;i<l;i++)
	{
		for(j=0;j<la;j++)
		{
			if(a[0][j]==s[i])
			{
				a[1][j]++;
				break;	
			}	
		}
		if(a[0][j]==0)
		{
			a[0][la]=s[i];
			a[1][la]++;
			la++;
		}
			
	}
	int c=0,t=0;
	for(i=1;i<la;i++)
	{
		k=i-1;
		t=a[1][i];
		c=a[0][i];
		while(a[1][k]<=t&&k>=0)
		{
			if(a[1][k]<t)
			{
				a[1][k+1]=a[1][k];
				a[0][k+1]=a[0][k];
				k--;
			}else{
				break;
			}
		}
		a[0][k+1]=c;
		a[1][k+1]=t;
	}
	for(i=0,j=1;i<la;j++,i++)
	{
		printf("%c-%d",a[0][i],a[1][i]);
		if(j%4==0) printf("\n");
		else{
			putchar(' ');
		}
	}
	return 0;	
}

