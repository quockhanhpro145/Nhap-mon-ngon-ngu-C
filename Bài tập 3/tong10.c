#include <stdio.h>

int main(void) {
  // khai bao bien
  int tong,dem;
  tong = 0;
  // xuat ra man hinh tong tu 1 den 10
  for(dem = 1; dem <=10; dem = dem + 1)
      tong = tong + dem;
      printf(" Tong la: %d",tong);

  return 0;
}
