#include <stdio.h>
#include <math.h>

int main(void) {
  // khai báo biến
  float a, b, c, delta, x1, x2, x;
  // nhập xuất giá trị
  printf("Nhap a = ");scanf("%f",&a);
  printf("Nhap b = ");scanf("%f",&b);
  printf("Nhap c = ");scanf("%f",&c);
  delta = b * b - 4 * a * c;
  // pt bậc 2
      if(delta < 0){
        printf("Phuong trinh vo nghiem");
      }else if(delta == 0){
        x1 = -b / (a * 2);
        printf("Phuong trinh co nghiem kep = %0.f ",x1);
      }else {
        x1 = (-b + sqrt(delta)) / (a * 2);
        x2 = (-b - sqrt(delta)) / (a * 2);
        printf("Phuong co nghiem\n x1 = %0.f\n x2= %0.f",x1, x2);
      }
  return 0;
}
