#include <stdio.h>

int main(void) {
  int a[100],n,chan,le, dem_chan,dem_le;
  int i,so0;
  chan = 0;
  le = 0;
  dem_chan = 0;
  dem_le = 0;
  so0 = 0;
  printf("nhap kich thuoc n = ");scanf("%d",&n);
  // nhap mang
  for(i = 0 ; i < n; i++){
      printf("\nNhap phan tu a[%d] = ", i);
      scanf("%d", &a[i]);
      }
  // xuat mang
  printf("mang a: ");
  for(i = 0 ; i < n; i++)
  printf("%d\t", a[i]);
  // tinh tong chan ve dem so chan
  for(i = 0; i < n; i++){
        if(a[i] % 2 == 0 && a[i] != 0){
        chan = chan + a[i];
        dem_chan = dem_chan + 1;
        }
      }
      printf("\nso cac so chan trong a : %d ", dem_chan);
  // tinh tong so le va dem so le
  for(i = 0; i < n; i++){
       if(a[i] % 2 != 0){
        le = le + a[i];
        dem_le = dem_le + 1;
       }
      }printf("\nso cac so le trong a : %d ", dem_le);
  // dem cac so 0
  for(i = 0; i < n; i++){
       if(a[i] == 0)
        so0 = so0 + 1;
    }printf("\nso cac so 0 trong a : %d ",so0);

    printf("\ntong so chan = %d",chan);
    printf("\ntong so le = %d",le);
  return 0;
}
