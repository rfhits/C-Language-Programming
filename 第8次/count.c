#include<stdio.h>
#include<string.h>
char a[11050][10];
int main()
{
	int n=0;
	scanf("%d",&n);
	int i=0,j=0,p;
	char t[10]={0};
	for(i=0;i<n;i++)
	{
		scanf("%s",t);
		j=0;
		while(a[j][0]!=0){
			if(strcmp(t,a[j])==0){
				a[j][9]++;
				p=1;
				break;
			}else{
				j++;
			}
			
		}
		if(p==0){
			strcpy(a[j],t);
			a[j][9]++;
		}
		p=0;
	}
	int m=a[0][9];
	j=0;
	for(i=1;a[i][0]!=0;i++)
	{
		if(a[i][9]>m){
			m=a[i][9];
			j=i;
		}
	}
	puts(a[j]);
}



