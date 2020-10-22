#include<stdio.h>
int re(int a);
int prime(int a);
int main()
{
	int a,b;
	scanf("%d",&a);
	b=re(a);
	//printf("%d",b);
	if(prime(a)!=0&&prime(b)!=0){
		printf("yes");
	}else{
		printf("no");
	}
	return 0;
}
int re(int a)
{
	int n,b;
	n=a;
	b=a%10;
	for(;n>10;){
		n=n/10;
		b=b*10+n%10;
		
	}
	return b;
}
int prime(int a)
{
	int i;
	int p=1;
	for(i=2;i!=a;i++){
		if(a%i==0){
			p=0;
			break;
		}
	}
		return p;
	
}

