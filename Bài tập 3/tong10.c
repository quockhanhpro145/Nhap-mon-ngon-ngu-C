#include <stdio.h>

int main(void) {
  // khai bao bien
  int tong,dem,n;
  tong = 0;
  // xuat ra man hinh tong tu 1 den 10
    printf("Nhap n =");scanf("%d",&n);
  for(dem = 1; dem <=n; dem = dem + 1)
      tong = tong + dem;
      printf(" Tong la: %d",tong);

  return 0;
}
