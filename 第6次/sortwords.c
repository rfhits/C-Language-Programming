#include<stdio.h>
#include<string.h>
char t[20]={0};
char a[1000][20];
int whobf(char a[],char b[])
{
	int i=0;
	for(i=0;;i++)
	{
		if(a[i]<b[i])
		{
			return 1;
		}else{
			if(a[i]==b[i])
			{
				continue;
			}else{
				return 2;
			}
		}
	}
}
int judge(char a[],char b[])
{
	if(strcmp(a,b)==0)
	{
		return 1;//表示 a，b一模一样 
	}
	return 0;
}
int put(FILE* fo,char a[])
{
	int la=strlen(a);
	int i=0;
	for(i=0;i<la;i++)
	{
		fputc(a[i],fo);
	}
	fputc(' ',fo);
	return 0;
}
int main(int argc,char *argv[])
{
	FILE* fi,*fo;
	fi=fopen(argv[1],"r");
	fo=fopen(argv[2],"w");
	int c,i=0,j=0,bf=0,k=0;//bf=0表示前面没有单词
	int p=0; //用于判断是否重复 
	while((c=fgetc(fi))!=EOF)
	{
		if(c!=' '&&c!='\n'&&c!='\t')
		{
			a[i][j++]=c;
			bf=1;
		}else{
			if(bf==1)
			{
				i++;
				j=0;
				bf=0;
			}
		}
	}
	int n=i;//共n个单词 
	//put(fo,a[0]);
	for(j=0;j<n;j++)
	{
		for(i=0;i<j;i++)
		{
			if(judge(a[i],a[j])==1)
			{
				p=1;
				break;
			}
		}
		if(p==1)
		{
			for(k=j;k<n;k++)
			{
				strcpy(a[k],a[k+1]);
			}
			j--;
			n--;
			p=0;			
		}
	}
	for(i=1;i<n;i++)
	{
		k=i-1;
		strcpy(t,a[i]);
		while(whobf(t,a[k])==1&&k>=0)
		{
			strcpy(a[k+1],a[k]);
			k--;
		}
		strcpy(a[k+1],t);
		
	}

	for(i=0;i<n-1;i++)
	{
		put(fo,a[i]);
	}
	for(i=0;a[n-1][i]!=0;i++)
	{
		fputc(a[n-1][i],fo);
	}
	
	fclose(fi);
	fclose(fo);
	return 0;
	
}

