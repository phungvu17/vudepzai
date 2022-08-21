#include<stdio.h>
int main (){
	int x,t,a,b;
	printf("nhap a=");
	scanf("%d",&a);
	printf("nhap b=");
	scanf("%d",&b);
	x=a*b;
	if (a==b){
		printf("UCLN(%d;%d)=%d",a,b,a);
		
	}else{
		while (a!=b){
			a=a-b;
		}else{
			b=b-a;
		}
	}
	t=a;
	
	
	
	
	
	
}
