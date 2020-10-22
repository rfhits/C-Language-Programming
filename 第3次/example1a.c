#include<stdio.h>
int main()
{
	double e;
	scanf("%lf",&e);
	int i;
	double d=100,a=0;
	double ai=1.0;
	for(i=1;d>=e;i++){
		if(i==1){
			ai=1.0*ai*(i)/(2*i-1);
		}else{
			ai=1.0*ai*(i-1)/(2*i-1);
		}
		a=a+ai;
		d=2*ai;
		if(d<e){
			printf("%d %.7f",i,2*a);
		}
	}
	return 0;
}


