#include <stdio.h>
int main(){
    int min,i,max,n,a[100];
    printf("nhap n:");
    scanf("%d",&n);

    for (i=0;i<n;i++){
        printf("a[%d]",i);
        scanf("%d",&a[i]);
        }
     max=a[0];
    for (i=0;i<n;i++){
    if (a[i]>max){
        max=a[i];
        }
    }
    min=a[0];
        for (i=0;i<n;i++){
    if (a[i]<min){
        min=a[i];
        }
    }
    printf("doan chua tat ca gia tri trong mang la=[%d;%d]",min,max);
    }
