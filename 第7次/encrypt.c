#include<stdio.h>
#include<string.h>
int main()
{
	FILE *pi,*po;
	pi=fopen("encrypt.txt","r");
	po=fopen("output.txt","w") ;
	char s[56]={0};
	char a[100]={0};
	gets(s);
	fgets(a,100,pi);
	int l=strlen(s); 
	int i,j,k=0;
	int p=0;//p=0时默认存入密钥之中 
	for(i=0,j=0;i<l;i++){
		for(k=0;k<i;k++){
			if(s[k]==s[i]){
				p=1;
				break;
			} 
		} 
		if(p==0){
			s[j++]=s[i];
		}
		p=0;
	}
	s[j]=0;
	char c;
	for(c='z';c>='a';c--){
		for(i=0;s[i]!=0;i++){
			if(s[i]==c){
				p=1;
				break;
			}
		}
		if(p==0){
			s[j++]=c;
		}
		p=0;
		
	}
	s[j]=0;//密钥已经生成 
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]>'z'||a[i]<'a'){
			fputc(a[i],po);
			continue;
		}
			
		fputc(s[a[i]-'a'],po);
	}
	//puts(s);
	fclose(pi);
	fclose(po);
	return 0;
	
}  

