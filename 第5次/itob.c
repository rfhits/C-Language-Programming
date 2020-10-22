#include <stdio.h> 
int itob(int ,char s[],int);
int i=0;
int main()
{
    char s[10]={0};
    int n,b,p=0;
    scanf("%d %d",&n,&b);
    if(n<0){
    	p=1;
    	n=0-n;
	}
    int l=itob(n,s,b);
    if(p==1){
    	putchar('-');
	}
    for(i=l-1;i>=0;i--){
        if(s[i]>=0&&s[i]<=9){
            printf("%d",s[i]);
        }else{
            printf("%c",s[i]+'a'-10);
        }
        //printf("%d",s[i]);
    }
    
    return 0;
}
int itob(int n,char s[],int b)
{
    
    while(n!=0){
        s[i]=n%b;
        n=n/b;
        i++;
    }
    return i;
}

