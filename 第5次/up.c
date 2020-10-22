#include<stdio.h>
#include<string.h>
int main()
{
	char s[10001]={0};
	int f[10001][27];
	int i,j,k,l,max=0;
	scanf("%s",s);
	l=strlen(s);
	memset(f,0,sizeof(f));
	f[0][s[0]-'a'+1]=1;
	for(i=1;i<l;i++)
	{
		for(j=1;j<=26;j++)
		{
			if(j==s[i]-'a'+1)
			{
				for(k=1;k<=j;k++)
				{
					if(f[i-1][k]>=max){
						max=f[i-1][k];
						//printf("%d\n",max);
					}
				}
				f[i][j]=max+1;
				max=0;
			}else{
				f[i][j]=f[i-1][j];
			}
		}
	}
	max=0;
	for(i=1;i<27;i++)
	{
		if(f[l-1][i]>max){
			max=f[l-1][i];
		}
	}
	printf("%d",max);
	return 0;
}

