#include <stdio.h>

int main(void) {
  // khai bao bien m
  int m;
  // xuat m ra man hinh
  printf("Nhap m = ");
  scanf("%d", &m);
  // xuat kg = g ra man hinh
  printf("kg = %dg\n--------\n", m * 1000);
  //xuat kg,g thanh hai cot
  printf("KG   | G\n--------\n");
  printf("%d", m);
  printf("   |%d", m * 1000);
  return 0;
}
