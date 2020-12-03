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
  // xuat DT,CV ra man hinh theo cot hang
  printf("R = %0.1f",R);
  printf("\n");
  printf("PI = %0.1f",PI);
  printf("\n");
  printf("DT  \tCV  \n%0.1f\t%0.1f",DT,CV);
  return 0;
}
