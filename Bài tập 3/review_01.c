#include <stdio.h>

int main(void) {
//khai báo biến
  int n;
//xuất ra màn hình 
  printf("Nhap n = ");scanf("%d",&n);
//in từ tiếng anh ứng với số 1 đến 9
  if(n == 1){
    printf("One",n);
  }else if(n == 2){
    printf("Two",n);
  }else if(n == 3){
    printf("Three",n);
  }else if(n == 4){
    printf("Four",n);
  }else if(n == 5){
    printf("Five",n);
  }else if(n == 6){
    printf("Six",n);
  }else if(n == 7){
    printf("Seven",n);
  }else if(n == 8){
    printf("Eight",n);
  }else if(n == 9){
    printf("nice",n);
  }else if(n >9){
    printf(" Greater than 9 "); 
  }
  return 0;
}
