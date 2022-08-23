#include <stdio.h>
void ktxh(int a[], int i){
    int j;
    for (j=0;j<i;j++){
        while (a[j]==a[i]){
            printf("nhap lai gia tra cua a[%d]",i);
            scanf("%d",&a[i]);
            }
        }
    }

    int main(){
        int a[1000],i,n;
        printf("nhap n:");
        scanf("%d",&n);
        for (i=0;i<n;i++){
            printf("a[%d]",i);
            scanf("%d",&a[i]);
            ktxh(a, i);
            }
        printf("mang vua nhap la");
        for (i=0;i<n;i++){
        printf("%5d",a[i]);}
        }
