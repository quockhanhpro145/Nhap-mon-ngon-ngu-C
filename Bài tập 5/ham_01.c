#include <stdio.h>

void sum();
int main(){
  sum();
  return 0;
}
// không có dữ liệu trả về
void sum()
{
  int a , b, c;
  printf("Nhap a b c : ");scanf("%d%d%d",&a ,&b ,&c);
  printf("a + b + c = %d",a + b + c);
}
//có kiểu dữ liệu trả về
int sum(int a, int b , int c);// khai báo hàm sum
int main() {
  int x, y, z;
  printf("Nhap x y z : "); scanf("%d%d%d",&x , &y , &z);
  printf("x + y + z = %d", sum(x,y,z));// gọi hàm sum
  return 0;
}
