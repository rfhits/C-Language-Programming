#include<stdio.h>
int a[300],b[300];
int main()
{
	int i,j,p=0;
	for(i=0;;i++){
		scanf("%d",&a[i]);
		if(a[i]==-1){
			break;
		}
	}
	for(i=0;;i++){
		scanf("%d",&b[i]);
		if(b[i]==-1){
			break;
		}
	}
	for(i=0;a[i]!=-1;i++){
		for(j=0;b[j]!=-1;j++){
			//printf("%d %d\n",a[i],b[j]);
			if(a[i]==b[j]){
				p=1;
				break;
			}
		}
		if(p==0){
			printf("%d ",a[i]);	
		}
		p=0;
	}
	return 0;
}

