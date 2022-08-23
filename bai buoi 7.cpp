#include <stdio.h>
int main(){
    int a[1000],n,i,x,ktxn,kt;
    printf("nhap n:");
    scanf("%d",&n);
    printf("nhap x:");
    scanf("%d",&x);
    for (i=0;i<n;i++){
        printf("a[%d]",i);
        scanf("%d",&a[i]);
        }
        int j=0;
         ktxn=(a[0]-x);
    for (i=0;i<n;i++){
        if (x>=a[i]){

       if (x-a[i]>ktxn){
           ktxn=x-a[i];
           j=i;
           }
       }else {
           if (a[i]-x>ktxn){
               ktxn=a[i]-x;
               j=i;
               }
           }
           }
           printf("gia tri xa nhat %d",a[j]);
       }
