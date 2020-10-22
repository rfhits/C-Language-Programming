#include<stdio.h>
int main()
{
	int n=0,m=0;
	FILE *fin=NULL;
	fin=fopen("filein.c","r");
	int c;
	while((c=fgetc(fin))!=EOF){
		m++;
		while(c=='/'&&(c=fgetc(fin))=='*'){
			m++;
			while((c=fgetc(fin))!='*'){
				n++;
				m++;
			}
			m+=3;
			c=fgetc(fin);
			c=fgetc(fin);
			
		}
	}
	fclose(fin);
	int s=100*1.0*n/m;
	printf("%d%%\n",s);
	//printf("%d %d",m,n);
	return 0;
	
}

