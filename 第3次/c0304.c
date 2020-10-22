#include<stdio.h>
int sum(int a,int b);
int main()
{
	int s;
	int p=0;
	scanf("%d",&s);
	int i,j;
	int n,m;
	for(i=1;i!=s;i++){
		for(j=i+1;j!=s;j++){
			if(s==sum(i,j)){
				p=1;
				n=i;
				m=j;
				break;
			}
		}
		if(p==1){
			break;
		}
	}
	if(p==0){
		printf("No Answer");
	}else{
		printf("%d=",s);
		for(;n<m;n++){
			printf("%d+",n);
		}
		printf("%d",m);
	}
	
}
int sum(int a,int b)
{
	int p=(a+b)*(b-a+1)/2;
	return p;
}


