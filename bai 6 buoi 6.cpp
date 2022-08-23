#include <stdio.h>

int main(){
    int a[1000],n,i;
    printf("nhap n:");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("a[%d]",i);
        scanf("%d",&a[i]);
        }
        int dem=0;
        int max=0;
        printf("so duong lien tiep dai nhat gom:");
for (i=0;i<n;i++){
    if (a[i]>0){
        dem+=1;
        if (max<dem){
            max=dem;
            printf("\t%d",a[i]);
            }
        }else dem=0;
    }

    printf("\nso luong so duong lien tiep nhieu nhat=%d",max);
    }
