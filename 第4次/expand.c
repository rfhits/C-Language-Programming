



#include <stdio.h> 
#include<string.h>
int main()
{
    char s[100];
    int i,p=0;
    char j;
    gets(s);
    int l=strlen(s);
    for(i=0;i<1+l;i++){
        if(s[i]=='-'){
            p=1;
        }
        if(p!=1){
            putchar(s[i]);
        }else{
            if(s[i-1]<s[i+1]){
                for(j=s[i-1]+1;j<s[i+1];j++){
                    putchar(j);
                }
            }else{
                if(s[i-1]==s[i+1]){
                    putchar(s[i+0]);
                }else{
                    printf("-%c",s[i+1]);
                    return 0;
                }
            }
        }
        p=0;
    }
    return 0;
}


