#include <stdio.h>
int UCLN(int a,int b){
    if (a==b){
        return a;
        }else{
    while (a!=b){
        if (a>b){
            a=a-b;
            }else{
            b=b-a;}
        }return b;
        }
    }
int main(){
int a,b;
  printf("nhap a");
  scanf("%d",&a);
   printf("nhap b");
  scanf("%d",&b);
 int x=UCLN(a,b);
 printf("uoc chung lon nhat cua %d va %d la:%d",a,b,x);
}
