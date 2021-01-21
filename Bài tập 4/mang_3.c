#include <stdio.h>

int main(void) {
  int a[100],n,chan,le;
  int i;
  chan = 0;
  le = 0;
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
  printf("\ndem ca so chan : ");
  for(i = 0; i < n; ++i){
        if(a[i] % 2 == 0){
        chan = chan + a[i];
        printf("%d\t",a[i]);
        }
      }
  // tinh tong so le va dem so le
  printf("\ndem ca so le : ");
  for(i = 0; i < n; ++i){
       if(a[i] % 2 != 0){
        le = le + a[i];
        printf("%d\t",a[i]);
       }
      }
    printf("\ntong so chan = %d",chan);
    printf("\ntong so le = %d",le);
  return 0;
}
