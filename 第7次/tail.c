#include<stdio.h>
#include<string.h>
int main(int number,char *a[])
{
	int t=0,l;
	char s[100][100]={{0,0}},*p;
	int i=1,b;
	if(strcmp(a[1],"-")==0){
		t=10;
	}else{
		l=strlen(a[1]);
		for(;i<l;i++){
			b=a[1][i]-'0';
			t=10*t+b;
		}
	}
	freopen(a[2],"r",stdin);
	i=0;
	gets(s[i]);
	while(s[i][0]!=0){
		i++;
		gets(s[i]);
	}
	int n=i;
	for(i=n-t;i<n;i++)
	{
		puts(s[i]);
	}
	return 0;
}

