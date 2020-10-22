#include<stdio.h>
#include<string.h>
typedef struct{
	char nam[50];
	char tel[50];
}person;
int main()
{
	int n;
	scanf("%d",&n);
	person peo[60],t;
	int i,j;
	for(i=0;i<n;i++){
		scanf("%s%s",peo[i].nam,peo[i].tel);
		//peo[i].nam[10]=0;
		//peo[i].tel[10]=0;	
	}
	for(i=1;i<n;i++){
		j=i-1;
		t=peo[i];
		while(j>=0&&strcmp(t.nam,peo[j].nam)<0){
			peo[j+1]=peo[j];
			j--;
		}
		peo[j+1]=t;
	}
	for(i=0;i<n;i++){
		printf("%12.10s%12.10s\n",peo[i].nam,peo[i].tel);
	}
	return 0;
 } 

