#include <stdio.h>
int main(){
    int n,a[1000],i;
    do{

    printf("nhap n");
    scanf("%d",&n);

    }while (n<1);

    for (i=0;i<=n;i++){
        printf("a[%d]",i);
        scanf("%d",&a[i]);
        }
        printf("so le cuoi cung mang la: ");
    for (i=n;i>0;i--){
       if (a[i]%2==1){
           printf("%d",a[i]);
           break;
           }

        }

    }
