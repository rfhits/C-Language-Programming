#include<stdio.h>
int a[100][100];
int circle(int n,int l,int c)//c是开始打出的那个数 
{							//n是circle的次数 ,l是这个方向要打出多少个数字 
	
	int i,j;
	if(l==-1)
	{
		return 0;
	}
	if(l==0)
	{
		a[n][n]=c;
		return 0;
	}
	for(i=n;i<=l+n-1;i++,c++)
	{ 
		a[i][n]=c;
	}
	for(j=n;j<=l+n-1;j++,c++)
	{
		a[i][j]=c;
	}
	for(;i>n;i--,c++)
	{
		a[i][j]=c;
	}
	for(;j>n;j--,c++)
	{
		a[i][j]=c;
	}
	return circle(n+1,l-2,c);
}
int main()
{
	FILE* fo;
	fo=fopen("file.out","w");
	int n;
	int i,j;
	scanf("%d",&n);
	//int l=n/2;
	circle(1,n-1,1);
	for(j=1;j<=n;j++)
	{
		for(i=1;i<=n;i++)
		{
			fprintf(fo,"%5d",a[i][j]);
			if(i==n) fprintf(fo,"%c",'\n');
		}
	}
	fclose(fo);
	return 0;
	
}

