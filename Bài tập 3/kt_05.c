#include <stdio.h>

int main(void) {
  int n,i;
  printf(" Nhap n = ");scanf("%d",&n);
  int s1 = 0, s2= 0;
  for(i = 1; i <= n; i++){
    if(i % 2 == 0){
      s1 = s1 + i;// chẵn
    }else {
      s2 = s2 + i;// lẻ
    }
  }
  printf("Tong so chan s1 = %d\n",s1);
  printf("Tong so le s2 = %d",s2);
  return 0;
}
