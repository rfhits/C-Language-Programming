#include<stdio.h>
int max( int a,int b);
int min(int a,int b);
int main()
{
	int area =0;
	
	int ax1,ay1,ax2,ay2;
	int bx1,by1,bx2,by2;
	scanf("%d%d%d%d",&ax1,&ay1,&ax2,&ay2);
	scanf("%d%d%d%d",&bx1,&by1,&bx2,&by2);
	int dx=min( max( ax1, ax2), max( bx1, bx2))-max( min( ax1, ax2), min( bx1, bx2));
	int dy=min( max( ay1, ay2), max( by1, by2))-max( min( ay1, ay2), min( by1, by2));
	if(dx<0||dy<0){
		printf("%d",area);
	}else{
		area=dx*dy;
		printf("%d",area);
	}
	return 0;
	
}
int max( int a,int b)
{
	int s=a;
	if (b>s){
		s=b;
	}
	return s;
}
int min(int a,int b)
{
	int s=a;
	if(b<s){
		s=b;
	}
	return s;
}

