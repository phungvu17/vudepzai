#include <stdio.h>
#include <math.h>
bool tamgiac(int a,int b,int c){
    if (a+b>c && a+c>b && b+c>a){
        return true;
        }else{ 
        return false;}
    }

int chuvi(int a,int b, int c){
int cv;
  cv=a+b+c;
  return cv;
}

float dientich(int a, int b, int c){
    float p;
    float s;
        p=(float)chuvi(a,b,c)/2;
        s=sqrt(p*(p-a)*(p-b)*(p-c));
     return s;
    }

int main(){
   int a,b,c;
  printf("nhap a");
  scanf("%d",&a);
   printf("nhap b");
  scanf("%d",&b);
   printf("nhap c");
  scanf("%d",&c);
 // int cv=chuvi(a,b,c);
  if (tamgiac(a,b,c)){


   float s=dientich(a,b,c);
   printf("\ndien tich tam giac la:%.2f",s);

   }else{
       printf("ban nhap khong phai la tam giac");
   }
}

