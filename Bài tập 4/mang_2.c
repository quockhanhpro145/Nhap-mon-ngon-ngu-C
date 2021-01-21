#include <stdio.h>
 
int main(){
    int a[100],n,tong;
    tong = 0;
    printf("Nhap n:");scanf("%d",&n);
    for(int i = 0; i < n; i++){
     printf("\nNhap phan tu a[%d] = ", i);
     scanf("%d", &a[i]);
     }
    printf("%d\n",a[n]);
    for(int i = 0; i < n; i++)
    tong = tong + a[i];
    printf("Tong = %d",tong);
    getchar();
    return 0;
}
