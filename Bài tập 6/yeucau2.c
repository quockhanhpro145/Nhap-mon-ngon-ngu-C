#include <stdio.h>

int main(void) {
   int n;
  float tong = 0;
  printf("Nhap n = ");scanf("%d",&n);
  for( int i = 1; i <= n; i++){
    tong += (float)1 / i; 
  }
    printf("1 + 1/2 + 1/3 + ... + 1/n = %0.1f",tong);
  return 0;
}
