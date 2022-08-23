#include <stdio.h>
int main(){
	int n,gt;
	printf("Nhap n: ");
	scanf("%d",&n);
	gt=1;

	for(int i=1;i<=n;i++){
		gt=gt*i;
	}
	printf("Giai thua cua %d la: %d",n,gt);
}
