#include <stdio.h>
int main(){
	int n,i,t;
	printf("Nhap n: ");
	scanf("%d",&n);
	t=0;
	i=n;

	while(i!=0){
		t+=i%10;
		i/=10;
	}
	printf("Tong cac chu so cua so %d la: %d ",n,t);
	}
