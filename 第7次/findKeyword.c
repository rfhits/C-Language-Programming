#include<stdio.h>
char s[1000];
int n;
char a[]="for",b[]="while",c[]="if";
int getsit(int k){
	k--;
	int i=1;
	while(s[k]!='\n'&&k>=0){
		k--;
		i++;
	}
	return i;
}
int getline(int k)
{
	int i=1;
	while(k>=0){
		if(s[k]=='\n'){
			i++;
		
		}
		k--;
	}
	return i;
}
int bwhat(int k)
{
	int p=0,t=0,m=k,i;
	if(s[k]=='i'&&s[k+1]=='f') p=3;
	else{
		if(s[k]=='f'&&s[k+1]=='o'||s[k+2]=='r') p=1;
		else{
			for(i=0;i<5;i++){
				if(b[i]==s[k]){
					k++;
				}else{
					t=1;
					break;
				}
			}
			if(t==0){
				p=2;
			}else{
				return 0;
			}
			t=0;
		}
	}
	k=m;
	if(p!=0){
		i=k-1;
		while(s[i]!=';'&&s[i]!='{'&&i>=0){
			if(s[i]!='\n'&&s[i]!='\t'&&s[i]!=' ') {
				t=1;
				break;
			}
			i--;
		}
		if(t==1) return 0;
		t=0;
	}
	if(p!=0){
		if(p==1){
			i=k+3;	
		}else{
			if(p==2) i=k+5;
			else{
				i=k+2;
			}
		}
		while(s[i]!='('&&i<=n){
			if(s[i]!='\n'&&s[i]!='\t'&&s[i]!=' ') {
				t=1;
				break;
			}
			i++;
		}
		if(t==1) return 0;
		t=0;
	}
	return p;
}
int main()
{
	FILE *fi;
	char words[100][3]={{0,0,0}};
	fi=fopen("in.c","r");
	int c=0,line=1,sit=1;
	int i=0,j=0;
	while((c=fgetc(fi))!=-1){
		s[i++]=c;
	}
	n=i;
	int p=0;
	for(i=0;i<n;i++)
	{
		if(s[i]=='i'||s[i]=='f'||s[i]=='w'){
			p=bwhat(i);	
		}
		if(p!=0){
			line=getline(i);
			sit=getsit(i);
			words[j][0]=p;
			words[j][1]=line;
			words[j][2]=sit;
			j++;
		}
		p=0;
	}
//	int l=j;
	for(i=0;i<j;i++){
		if(words[i][0]==1){
			printf("for:");
		}else{
			if(words[i][0]==2) printf("while:");
			else printf("if:");
		}
		printf("%d,%d\n",words[i][1],words[i][2]);
	}
	fclose(fi);
	return 0;
	
	
}


