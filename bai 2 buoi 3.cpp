#include <stdio.h>
int main(){
	int n,i,max,a[100];
	printf("nhap vao n: ");
	scanf("%d",&n);
	if (n<=6){
				printf("khong co so nao");
				return 0;}
	printf("so nho hon N chi het co 2 và 3 la :");

	for (i=n-1;i>0;i--){	
		if (i % 6==0)
		break;}


		printf("\t%d",i);

	}

