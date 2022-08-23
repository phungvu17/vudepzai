#include <stdio.h>
#include <math.h>
int main(){
    int a[1000],n,i,x,ktgn,kt;
    printf("nhap n:");
    scanf("%d",&n);
    printf("nhap x:");
    scanf("%d",&x);
    for (i=0;i<n;i++){
        printf("a[%d]",i);
        scanf("%d",&a[i]);
        }
    ktgn=10000000;
    for (i=0;i<n;i++){
    if (x!=a[i]){
    if (ktgn>abs(a[i]-x)) {
        ktgn=abs(a[i]-x);
        kt=a[i];
        }
    }
}
 printf("gia tri gan %d nhat la:",x);
    for (i=0;i<n;i++){
        if (ktgn==abs(a[i]-x))
    printf("\t%d",a[i]);
    }
        }
