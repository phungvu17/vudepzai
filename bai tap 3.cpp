#include<stdio.h>
int main()
{
  int n;
  do{
    printf("Nhap n: ");
    scanf("%d", &n);
    
  }while(n<=0);
  printf("Cac uoc so cua %d la: ",n);
  
  for(int i=1;i<=n;i++){
    if(n%i==0){
      printf("%d ", i);
    }
  }
}
