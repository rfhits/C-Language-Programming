#include<stdio.h>
#include<string.h> 
typedef struct{
	int num;
	char nam[20];
	int age;
}stud;
int main()
{
	int n=0;
	stud peo[50];
	stud t;
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&peo[i].num);
		scanf("%s",peo[i].nam);
		scanf("%d",&peo[i].age);
		if(i>0){
			int j=i-1;
			stud t;
			t=peo[i];
			while(j>=0&&strcmp(peo[j].nam,t.nam)>0){
				peo[j+1]=peo[j];
				j--;
			}
			peo[j+1]=t;
		}
	}
	for(i=0;i<n;i++){
		printf("%3d%6s%3d\n",peo[i].num,peo[i].nam,peo[i].age);
	}
	for(i=1;i<n;i++){
		int j=i-1;
		stud t=peo[i];
		while(j>=0&&peo[j].age>t.age){
			peo[j+1]=peo[j];
			j--;
		}
		peo[j+1]=t;
	}
	puts("");
	for(i=0;i<n;i++){
		printf("%3d%6s%3d\n",peo[i].num,peo[i].nam,peo[i].age);
	}
	return 0;
 } 

