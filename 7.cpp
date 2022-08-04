#include <stdio.h>
int main (){
	
	int a;
	printf("nhap a=");
	scanf("%d",&a);
	
	int b;
	printf("nhap b=");
	scanf("%d",&b);
	
	int c;
	printf("nhap c=");
	scanf("%d",&c);
	
	if(a>b>c)
	printf("%d  la so lon nhat",a); 	
		
	else
	if(a<b>c)
	printf("%d  la so lon nhat",b);
		
	else
	if(a<b<c)
	printf("%d  la so lon nhat",c);
		
	
}
	
	
	 

