#include <stdio.h>

int main(void) {
  int n, tong = 0;
  printf("Nhap n = ");scanf("%d",&n);
  for(int i = 1; i < n; i++){
    if(n % i == 0){
      tong = tong + i;
      }
    } 
      if(tong == n){
        printf("%d la so hoan hao\n",n);
      } else {
        printf("%d la sao khong hoan hao\n",n);
      }
    

  return 0;
}
