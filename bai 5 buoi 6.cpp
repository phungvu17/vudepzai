#include <stdio.h>
int main(){
    int min,n,a[1000],i;
    printf("nhap n:");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("a[%d]",i);
        scanf("%d",&a[i]);
        }
        int dem=0;
    for (i=0;i<n;i++){
        if (a[i]>0){
            dem+=1;
            break;
            }
        }
        if (dem!=0){
            min=a[i];
            }
    for (i=0;i<n;i++){
        if (a[i]>0 && min>a[i]){
            min=a[i];
            }

        }
    printf("so duong nho nhat =%d", min );
    }
