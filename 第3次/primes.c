#include<stdio.h>
int print(int p);
int ps(int m);
int main()
{
	int i;
	scanf("%d",&i);
	print(i);
	return 0;
}
int ps(int m)
{
	int j=0;
	int i;
	for(i=2;i!=m;i++){
		int d=m%i;
		if(d==0){
		    j=1;
			break;
		}
	}
	if(j==0){
		return 0;
	}else{
		return 1;
	}
}

int print(int p)
{
	int i;
	int n;
	for(i=2;i!=p;i++){
		int m=p%i;
		if(m==0){
			printf("%d ",i);
			n=p/i;
			break;
		}
	
	}
	if(ps(n)==1){
	
	 print(n);
	}else{
		printf("%d",n);
		return 0;
	
	}
}

