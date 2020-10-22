#include<stdio.h>
int main()
{
	int a[100]={0};
	int b[100]={0};
	int p=0,k,j=0,i=0;
	int la,lb;
	char c=0;
	while(c!='\n'){
		scanf("%d",&a[i++]);
		c=getchar();
	}
	la=i;
	i=c=0;
	while(c!='\n'){
		scanf("%d",&b[i++]);
		c=getchar();
	}
	lb=i;
	for(k=0;k<lb;k++){
		for(i=0;i<la;i++){
			if(b[k]==a[i]){
				p=1;
				break;
			}
		}
		if(p==0){
			a[la++]=b[k];
		}else{
			for(j=i;j<la-1;j++){
				a[j]=a[j+1];
			}
			la--;
		}
		p=0;
	}
	int t;
	for(i=1;i<la;i++){
		j=i-1;
		t=a[i];
		while(a[j]<t&&j>=0){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=t;
	}
	for(i=0;i<la;i++) printf("%d ",a[i]);
	//for(j=0;j<i;j++) printf("%d",a[j]);
	return 0;
}

