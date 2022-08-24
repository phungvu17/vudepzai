#include <stdio.h>
int main (){
	int n; 
	printf (" nhap n:");
	scanf("%d",&n);
	float S;
	S = 0 ;
	for(int i=1;i<n;i++){
		S=S+1.0/i;
	} 
	printf ("\n tong = %.2f",S);
	
	
}
