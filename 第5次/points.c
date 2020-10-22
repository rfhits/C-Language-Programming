#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	double x[15],y[15];
	int i;
	double dx,dy;
	double tot=0;
	double p,a,b,c;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf %lf",&x[i],&y[i]);
	}
	for(i=1;i<n-1;i++){
		dx=x[0]-x[i];
		dy=y[0]-y[i];
		a=sqrt(dx*dx+dy*dy);
		dx=x[0]-x[i+1];
		dy=y[0]-y[i+1];
		b=sqrt(dx*dx+dy*dy);
		dx=x[i]-x[i+1];
		dy=y[i]-y[i+1];
		c=sqrt(dx*dx+dy*dy);
		p=(a+b+c)/2;
		tot+=sqrt(p*(p-a)*(p-b)*(p-c));
		
		
		
	}
	printf("%.2f",tot);
	return 0;
	
	
	
	
}

