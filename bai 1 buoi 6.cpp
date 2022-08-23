#include <stdio.h>
int main(){
    int a[100],i,n,dem;
    printf("nhap n:");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
        }
        dem=0;
        float tb;
        int s=0;
    for (i=1;i<=n;i++){
        if (a[i] %2==1){
            dem+=1;
            s=s+a[i];
            tb=s/(float)dem;
            }
         }
         printf("trung binh cong=%.2f",tb);
    }
