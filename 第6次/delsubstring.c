#include<stdio.h>
#include<string.h>
int main()
{
	char a[100]={0};
	char b[100]={0};
	gets(a);
	gets(b);
	int i=0,j=0,k;
	int la=strlen(a),lb=strlen(b);
	if(la<lb||strcmp(a,b)==0){
		return 0;
	}
	for(i=0;i<la;i++){
		for(j=i,k=0;a[j]==b[k]&&b[k]!=0;j++,k++){
			
		}
		if(b[k]==0){
			i+=lb-1;
			k=0;
		}else{
			putchar(a[i]);
		}
		
	}
	return 0;
}

