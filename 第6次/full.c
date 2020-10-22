#include<stdio.h>
int a[15]={0},n;
int perm(int m)
{
	int i;
	if(m==2)
	{
		for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
		putchar('\n');
		for(i=0;i<n-2;i++)
		{
			printf("%d ",a[i]);
		}
		printf("%d %d\n",a[n-1],a[n-2]);
		return 0;
	}else{
		int b[15]={0};
		int j; 
		for(i=0;i<n;i++)
		{
			b[i]=a[i];
		}
		for(i=n-m;i<n;i++){
			int t=b[i];
			int k=0;
			for(k=0;k<n;k++)
			{
				a[k]=b[k];
			}
			for(j=i;j>n-m;j--){
				a[j]=b[j-1];
			}
			a[j]=t;
			perm(m-1);
		}
	}
}
int main()
{
	scanf("%d",&n);
	int i=0;
	for(;i<n;i++)
	{
		a[i]=i+1;
	}
	if(n==1)
	{
		printf("%d",1);
		return 0;
	}
	perm(n);
	return 0;
}

