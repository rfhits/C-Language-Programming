#include<stdio.h>
#include<string.h>
char* strupr(char a[])
{
	int i=0;
	for(i=0;a[i]!=0;i++){
		if('a'<=a[i]&&a[i]<='z'){
			a[i]+='A'-'a';
		}
	}
	return &a[0];
}
int letter(int c)
{
	if(('a'<=c&&c<='z')||('A'<=c&&c<='Z')){
		return 1;
	}else{
		return 0; 
	}
	 
}
int judge(char a[],char t[])
{
	if(strcmp(strupr(a),strupr(t))==0){
		return 1;
	}else{
		return 0;
	}
}
int upper(int c)
{
	if('A'<=c&&c<='Z') return c;
	else{
		return c-'a'+'A';
	}
}
int main()
{
	char a[100]={0},b[100]={0},t[100]={0},t1[100]={0}; 
	FILE *pi=NULL;
	FILE *po=NULL;
	int i;
	pi=fopen("filein.txt","r");
	po=fopen("fileout.txt","w");
	gets(a);//谁要被替换 			
	gets(b);//将要替换成b
	int la=strlen(a);
	//int lb=strlen(b);
	int c=0;
	while((c=fgetc(pi))!=EOF){
		if(letter(c)&&letter(a[0]))//若c a[0] 是字母
		{
			if(upper(c)==upper(a[0]))				//abb-A
			{
				t[0]=c;
				for(i=1;i<la;i++){
					c=fgetc(pi);
					if(c==EOF){
						fputs(t,po);
						return 0;
					}
					t[i]=c;
				}
				strcpy(t1,t);
				if(judge(a,t1)){
					fputs(b,po);
					memset(t,0,100);
				}else{
					fputs(t,po);
					memset(t,0,100);
				} 
			}else{
				fputc(c,po);
			}
		}else{//至少有一个不是字母
			if(c==a[0]){
				t[0]=c;
				for(i=1;i<la;i++){
					c=fgetc(pi);
					if(c==EOF){
						fputs(t,po);
						return 0;
					}
					t[i]=c;
				}
				strcpy(t1,t);
				if(judge(a,t1)){
					fputs(b,po);
					memset(t,0,100);
				}else{
					fputs(t,po);
					memset(t,0,100);
				} 
				
			}else{
				fputc(c,po);
			} 
		} 
	}
	fclose(pi);
	fclose(po);
	return 0;
}

