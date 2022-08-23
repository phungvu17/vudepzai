#include <stdio.h>

int main(){
    int a[1000],n,i,j,k;
    printf("nhap n:");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("a[%d]",i);
        scanf("%d",&a[i]);
        }
        int d,c;
        int max=0,s=0;
    for (i=0;i<n;i++){
      for (j=i;j<n;j++){
          s=0;
         for (k=i;k<=j;k++) {
             if (a[k]>0){
                 s=s+a[k];
                 }else i++;
             }
             if (max<s){
                 max=s;
                 d=i;
                 c=j;
                 }
          }
    }
    printf("chuoi so duong: ");
    for (i=d;i<=c;i++){
    printf("\t%d",a[i]);
    }
    printf ("\ntong lon nhat cua chuoi so duong: %d",max);

    }
