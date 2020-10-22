#include<stdio.h>
#include<string.h>
typedef struct{
	char nam[20];
	int loc[2000];
}word;	
word a[50];
int main()
{
	int i,j=0,k=0,p=1,n=1;//k是存了几个单词 
	freopen("crossin.txt","r",stdin);
	char t[1000]={0},b[100]={0};//存储一行 
	while((gets(t))!=NULL)
	{
		for(i=0;i<strlen(t)+1;i++){
			if((t[i]>='A'&&t[i]<='Z')||('a'<=t[i]&&t[i]<='z')||t[i]=='-'){//是一个字母 
				b[j++]=t[i]; 
			}else{
				if(b[0]!=0){
					if(b[0]=='-'){
						memset(b,0,100);
						j=0;
						continue;
					}
					if(strcmp(b,"and")==0||strcmp(b,"a")==0||strcmp(b,"an")==0||strcmp(b,"the")==0)
					{
						memset(b,0,100);
						j=0;
						continue;
					}
					for(j=0;j<k;j++){
						if(strcmp(b,a[j].nam)==0){
							p=0;
							int l=0;
							while(a[j].loc[l]!=0){
								l++;
							}
							a[j].loc[l]=n;
							a[j].loc[l+1]=i-strlen(b)+1;
							memset(b,0,100);
							j=0;
							break;
						}
					}
					if(p){
						strcpy(a[k].nam,b);
						a[k].loc[0]=n;
						a[k].loc[1]=i-strlen(b)+1;
						memset(b,0,100);
						k++;
						j=0;
					}
					p=1;	
				}	
			}	
		}
		n++;
	}
	word tp;
	for(i=1;i<k;i++){
		j=i-1;
		tp=a[i];
		while(j>=0&&strcmp(a[j].nam,tp.nam)>0){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=tp;
	}
	//freopen("crossout.txt","w",stdout);
	FILE *o=fopen("crossout.txt","w");
	for(i=0;i<k;i++){
		fprintf(o,"%s:",a[i].nam);
		j=0;
		while(a[i].loc[j]!=0){
			fprintf(o,"(%d,%d)",a[i].loc[j],a[i].loc[j+1]);
			j+=2;
			if(a[i].loc[j]!=0) fputc(',',o);
		}
		fprintf(o,"\n");
		
	}
	fclose(o);
	return 0;
	
}

