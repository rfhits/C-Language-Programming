#include<string.h>
#include<stdio.h>
int main()
{
	char a[1000]={0};
	gets(a);
	int la=strlen(a);
	int i,j,k,p=0;//p为1，是小数 
	for(i=0;i<la;i++){
		if(a[i]=='.'){
			p=1;
			j=i;
			break;
		}
	}
	if(p==0) puts(a);
	else{
		if(a[0]!='0'){
			k=j-1;
			for(i=j-1;i>=1;i--){
				a[i+1]=a[i];
			}
			a[1]='.';
			
			printf("%se%d",a,k);
		}else{
			for(i=2;i<la;i++){
				if(a[i]!='0'){
					k=i;
					break;
				}
			}
			printf("%c",a[k]);
			if(a[k+1]!=0){
				putchar('.');
			}
			for(i=k+1;a[i]!=0;i++){
				printf("%c",a[i]);
			}
			printf("e-%d",k-1);
		}
		
	}
	return 0;
}

