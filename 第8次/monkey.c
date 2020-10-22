#include<stdio.h>
int main()
{
	int  a[100],n,m,q,i,j;
	scanf("%d%d%d",&n,&m,&q);
	int l=n,s;
	for(i=1;i<=n;i++){
		a[i]=1;
	}
	while(l!=1){
		s=m-1;
		for(i=q+1;s>0;i++){
			if(a[(i-1)%n+1]==1){
				s--;
			}
		}
		i--;
		if(s==0){
			l--;
			a[(i-1)%n+1]=0;
			for(j=i+1;;j++){
				if(a[(j-1)%n+1]==1){
					q=(j-1)%n+1;
					break;
				}
			}
		}else{
			for(i=1;s>0;i++){
				if(a[(i-1)%n+1]==1) s--;

			}
			a[(i-1)%n+1]=0;
			l--;
			for(j=(i-1)%n+1+1;;j++){
				if(a[(j-1)%n+1]==1){
					q=(j-1)%n+1;
					break;
				}
			}
		}
	}
	printf("%d",q);
 } 

