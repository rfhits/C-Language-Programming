#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fi,*fo;
	fi=fopen("filezip.in","r");
	fo=fopen("filezip.out","w");
	char s[1000]={0};
	int c=0;
	while((c=fgetc(fi))!='\n'){
		
	}
	fgets(s,1000,fi);
	char a[100][3]={{0,0,0}};
	int i,j;
	int l=strlen(s);
	a[0][0]=s[0];
	a[0][1]=s[l-1];
	for(i=1;i<l;i++){
		a[i][0]=s[i];
		a[i][1]=s[i-1];
	}
	a[1][2]=1;
	for(i=1;i<l;i++)
	{
		j=i-1;
		int t=a[i][0];
		int p=a[i][1];
		int k=a[i][2];
		while(a[j][0]>=t&&j>=0){
			if(a[j][0]>t){
				a[j+1][0]=a[j][0];
				a[j+1][1]=a[j][1];
				a[j+1][2]=a[j][2];
				j--;
			}else{
				break;
			}
			
		}
		a[j+1][0]=t;
		a[j+1][1]=p;
		a[j+1][2]=k;
	}
	for(i=0;i<l;i++)
	{
		fprintf(fo,"%c",a[i][1]);
	}
	for(i=0;i<l;i++)
	{
		if(a[i][2]==1)
		{
			fprintf(fo,"\n%d",i+1);
			break;
		}
	}
	fclose(fi);
	fclose(fo);
	return 0;
}






