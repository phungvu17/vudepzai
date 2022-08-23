#include <stdio.h>
int main(){
	int a,b,n,i;
	do{
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
	}
	while(a<=0 || b<=0);
	n=a;
	i=b;
	while(a!=b){
		if(a>b)
		a-=b;
		else
		b-=a;
	}
	printf("Uoc chung lon nhat la: %d",a);
	printf("\nBoi chung nho nhat la: %d",(n*i)/a);
}
