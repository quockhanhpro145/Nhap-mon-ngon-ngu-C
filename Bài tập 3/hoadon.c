#include <stdio.h>

int main(void) {
  //khai bao bien
  int a,b;
  // xuat nhap bien
  printf("Nhap dongia = "); scanf("%d",&a);
  printf("Nhap soluong = "); scanf("%d",&b);
  // tinh thanh tien
  if(b <= 5 && a <= 500){
  printf("a*b = %d",a*b);
  }else if(b >= 5 && a >= 500){
    printf("a*b = %f",a*b*0.5);
  }

  return 0;
}
