#include<stdio.h>
int main()
{
  int n,S,i ;
  printf("nhap n= ");
  scanf("%d",&n);
  
  for(i=1 ;i<=n ;i++){
  S=0;
  	if (n%i==0){
  		S=S+i;
  		printf("\nuoc cua %d la %d",n,i);
	  }
  }
  printf("\ntong cac uoc cua %d la : %d",n,S);
}
