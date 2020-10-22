#include<stdio.h>
int main()
{
	FILE* fi=NULL;
	fi=fopen("fcopy.in","r");
	FILE* fo=NULL;
	fo=fopen("fcopy.out","w");
	int a='\0';
	a=fgetc(fi);
	while(a!=EOF){
		if(a!='\t'&&a!=' ') {
			fputc(a,fo);
			a=fgetc(fi);
		}
		else{
			fputc(' ',fo);
			while(a=='\t'||a==' '){
				a=fgetc(fi);
			}
		}
		
	}
	fclose(fo);
	fclose(fi);
	return 0;
}





