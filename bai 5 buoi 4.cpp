#include <stdio.h>
int main(){
	int n,i,t;
	printf("Nhap n: ");
	scanf("%d",&n);
	t=0;

	while(n!=0){
		i=n%10;
		if(i>t){
			t=i;
		}
		n=n/10;
	}
	printf("Chu so lon nhat la: %d",t);
}
