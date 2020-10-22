#include <stdio.h> 
int main()
{
    char a[26]={0};
    char c;
    int j,i,max;
    while((c=getchar())!=EOF){
        if(96<c&&c<123) a[c-97]++;
    }
    max=a[0];
    for(i=1;i<26;i++){
        if(a[i]>max) max=a[i];
    }
    for(i=1;i<=max;i++){
        for(j=0;j<26;j++){
            if(a[j]+i<=max) printf(" ");
            else printf("*");
        }
        printf("\n");
    }
    for(i=97;i<123;i++) putchar(i);
    return 0;
}


