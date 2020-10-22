


#include<string.h>
#include <stdio.h> 
#include<math.h>
int main()
{
    int i,j;
    int k=0;
    int temp;
    char a[100]={0};
    char b[100]={0};
    gets(a);
    gets(b);
    int la=strlen(a);
    int lb=strlen(b);
    for(i=0;i<la/2;i++){
        temp=a[i];
        a[i]=a[la-i-1];
        a[la-i-1]=temp;
    }
    //puts(a);
    for(i=0;i<lb/2;i++){
        temp=b[i];
        b[i]=b[lb-i-1];
        b[lb-i-1]=temp;
    }
    //puts(b);
    int c[100]={0};
    int ml=(la>=lb)? la:lb;
    //printf("ml %d\n",ml);
    for(i=0;i<ml;i++){
        if(a[i]==0){
            a[i]='0';
        }
        if(b[i]==0){
            b[i]='0';
        }
        c[i]=a[i]-b[i]; 
        //printf("c[%d] %d\n",i,c[i]);
    }
    int p=1;
    if(la<lb) p=-1;
    //printf("%d\n",p);
    if(la==lb){
        for(i=ml-1;i>=0;i--){
            if(c[i]<0){
                p=-1;
                break;
            }
        }
    }
    if(p==1){
        for(i=0;i<ml;i++){
            if(c[i]<0){
                c[i]+=10;
                c[i+1]--;
            }
        }
        for(i=ml-1;i>=1;i--){
            if(c[i]!=0){
                k=i;
                break;
            }
        }
        for(i=k;i>=0;i--){
             printf("%d",c[i]);
        }
    }else{
        for(i=0;i<ml;i++){
            if(c[i]<=0) c[i]=0-c[i];
            else{
                c[i]=10-c[i];
                c[i+1]++;
            }
        }
        printf("-");
        for(i=ml-1;i>=1;i--){
            if(c[i]!=0){
                k=i;
                break;
            }
        }
        for(i=k;i>=0;i--){
            printf("%d",c[i]);
        }
    }
    return 0;
}



