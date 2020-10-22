#include<stdio.h>
int main()
{
	int a[100]={0},b[100]={0};
	int i,j,k=0,m,n,l,p;
	char c;
	for(i=0;;i+=2){
		scanf("%d%d",&a[i],&a[i+1]);
		c=getchar();
		if(c=='\n') break;
	}
	int la=i;
	for(i=0;;i+=2){
		scanf("%d%d",&b[i],&b[i+1]);
		c=getchar();
		if(c=='\n') break;
	}
	int lb=i;
	int d[1000][2]={{0,0}};
	for(i=0;i<=la;i+=2){
		for(j=0;j<=lb;j+=2){
			m=b[j]*a[i];
			n=b[j+1]+a[i+1];
			for(l=0;l<k;l++){
				if(d[l][1]==n){
					p=1;
					d[l][0]+=m;
					break;
				}
			}
			if(p==0){
				d[k][0]=m;
				d[k][1]=n;
				k++;
			}
			p=0;
		}
	}
	for(i=1;i<k;i++){
		j=i-1;
		m=d[i][0];
		n=d[i][1];
		while(j>=0&&n>d[j][1]){
			d[j+1][0]=d[j][0];
			d[j+1][1]=d[j][1];
			j--;
		}
		d[j+1][0]=m;
		d[j+1][1]=n;
		
	}
	for(i=0;i<k;i++){
		printf("%d %d ",d[i][0],d[i][1]);
	}
	return 0;
}

