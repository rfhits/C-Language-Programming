#include<stdio.h>
int main ()
{
	int a1,a2,a3;
	char o1,o2,o3;
	scanf("%d %c",&a1,&o1);
	
	while(o1!='='){
		//scanf("%d %c",&a2,&o2);
		while(o1=='/'||o1=='*'){
			scanf("%d %c",&a2,&o2);
			if(o1=='/') a1=a1/a2;
			else a1=a1*a2;
			o1=o2;
		}
		if(o1=='+'||o1=='-'){
			scanf("%d %c",&a2,&o2);
			while(o2=='/'||o2=='*'){
				scanf("%d %c",&a3,&o3);
				if(o2=='/') a2=a2/a3;
				else a2=a2*a3;
				o2=o3;
			}
			if(o1=='+') a1=a1+a2;
			else a1=a1-a2;
			o1=o2;
		}
	}
	printf("%d",a1);
	return 0;
}

