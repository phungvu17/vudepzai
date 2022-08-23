#include <stdio.h>
int main(){
	int n,i,t;
	printf("Nhap n: ");
	scanf("%d",&n);
	i=n;

	while(i!=0){
		t=i%10;
		i=i/10;
	}
	printf("\nChu so dau tien cua la: %d",t);
}
