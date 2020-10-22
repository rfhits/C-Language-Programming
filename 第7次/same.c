#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fi,*fo;
	char a[]="int",b[]=";",c[]=",";//a是int,b是; 
	char de[15][25]={{0,0}};
	fi=fopen("input.c","r");
	fo=fopen("output.c","w");
	char s[200][50]={{0,0}};
	int i=0,p=0;//p是判断子,默认是0时输出 
	while(!feof(fi)){
		fscanf(fi,"%s",s[i++]);
	}
	int n=i,j;
	for(i=0,j=0;i<n;i++){
		if(strcmp(a,s[i])==0){//发现int 
			fprintf(fo,"%s",s[i]);
			i++;
			while(strcmp(s[i],b)!=0){//到";" 之前 
				if(strcmp(s[i],c)!=0){
					strcpy(de[j++],s[i]);
				}else fprintf(fo,"%s",c);
				i++;
			}
			fprintf(fo,"%s",b);
			i++;
			while(i<n){
				for(j=0;de[j][0]!=0;j++)
				{
					if(strcmp(s[i],de[j])==0){
						p=1;
						break;
					} 
				}
				if(p==0){
					fprintf(fo,"%s",s[i]);
				}
				p=0;
				i++;
			}
			
		}else{//遇到int前都在 else 里 
			fprintf(fo,"%s",s[i]);
		}
	}
	fclose(fi);
	fclose(fo);
	return 0;
	
}



