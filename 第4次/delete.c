#include <stdio.h> 
#include<string.h>
int main()
{
    int p;//要删除的数的个数
    //int m=0;//删了几个
    char s[240];
    int i,j;
    scanf("%s",s);
    scanf("%d",&p);
    int n=strlen(s);
    //printf("%d\n",n);
    s[n]=0,s[n+1]='\0';
    for(i=0;i<p;i++){
        for(j=0;j<n;j++){
            if(s[j]>s[j+1]){
                //m=m+1;
                for(;j<=n+1;j++){
                    s[j]=s[j+1];
                }
            }
        }
    }
    //s[n]='\0';
    printf("%s",s);
    return 0;
}



