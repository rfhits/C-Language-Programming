



#include <stdio.h> 
int main()
{
    int a[100];
    char c;
    char s[3];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n*n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%s",s);
    c=s[0];
    int p;//input
    while(c!='#'){
        if(c=='+'){
            for(i=0;i<n*n;i++){
            scanf("%d",&p);
            a[i]+=p;
            }
        }else{
            for(i=0;i<n*n;i++){
            scanf("%d",&p);
            a[i]-=p;
            }
        //c=getchar();
        //c=getchar();
        }
         scanf("%s",s);
         c=s[0];
    }
    for(i=0;i<n*n;i++){
        printf("%5d",a[i]);
        if((i+1)%n==0){
            printf("\n");
        }
    }
    return 0;
}

