#include<stdio.h>
#include<string.h>
int main()
{
	
	char a[100]={0};
	char b[100]={0};
	gets(a);
	gets(b);
	char c[100]={0};
	int i,j,k;
	i=j=k=0;
	for(;a[i]!=0&&b[j]!=0;){
		if(a[i]<=b[j]){
			c[k++]=a[i++];
		}else{
			c[k++]=b[j++];
		}
	}
	char* p;
	if (b[j]==0){
		p=a+i;
	}else{
		p=b+j;
	}
	
	strcat(c,p);
	puts(c);
 } 

