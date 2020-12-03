#include <stdio.h>

int main(void) {
  //khai bao bien DT,CV,R 
  double DT,CV,R;
  // gan gia tri bien R
  R = 1.5;
  // khai bao hang PI
  const double PI = 3.14;
  // gan gia tri DT,CV
  DT = R*R*PI;
  CV = 2*R*PI;
  // xuat DT,CV ra man hinh
  printf("DT = %0.1f\n",DT);
  printf("CV = %0.1f",CV);
  return 0;
}
