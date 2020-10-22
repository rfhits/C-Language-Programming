#include<string.h>
#include<stdio.h>
int n;


int set(char a[])
{
	int i,j=0,k,l;
	l=strlen(a);
	int bf=1;//表示前面一个是空格 
	for(i=0;i<l;i++)
	{
		if(a[i]!=' '&&a[i]!='\t')
		{
			a[j++]=a[i];
			bf=0;
		}else{
			if(bf==1) continue;
			else{
				a[j++]=' ';
				bf=1;
			}
		}
	}
	if(a[j-1]==' '||a[j-1]=='\t'){
		a[j-1]=0;
	}else{
		a[j]=0;
	}
}
int move(char a[])
{
	int i=0,j,k,d;
	int l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]==':')
		{
			if(a[i-1]!=' ')
			{
				for(k=l;k>=i;k--)
				{
					a[k+1]=a[k];
				}
				a[i++]=' ';
				l++;
				
			}
			if(a[i+1]!=' ')
			{
				for(k=l;k>i;k--)
				{
					a[k+1]=a[k];
					
				}
				a[i+1]=' ';
				l++;
			}
		
			break;
		}	else continue;
	}
	for(i=0;i<l;i++)
	{
		if(a[i]==':')
		{
			d=n-i;
			
			for(k=l;k>=0;k--)
			{
				a[k+d]=a[k];
			}
			
			for(i=0;i<d;i++)
			{
				a[i]=' ';
			}
			break;
		}
		
	}
	return 0;
	
}

int main()
{
	scanf("%d ",&n);
	n--;
	int i,j;
	char a[100][1000];
	memset(a,0,sizeof(a));
	while(1)
	{
		gets(a[i]);
		if(a[i][0]==0)
		{
			break;
		}
		i++;//一共 
	}
	j=i;
	for(i=0;i<j;i++){
		set(a[i]);
		move(a[i]);
		
		puts(a[i]);
	} 
	putchar('\r');
	return 0;
}


