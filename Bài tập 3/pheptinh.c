#include <stdio.h>

int main(void) {
  char pt;
  int a = 5,b = 3;
  printf("Nhap phep tinh:"); scanf("%c",&pt);
  switch(pt){
    case '+':
    printf("a+b=");break;
    case '-':
    printf("a-b");break;
    default:
    printf("vui long nhap phep tinh");
  }
  return 0;
}
