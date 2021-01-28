#include <stdio.h>

int main(){
  int a,b,c,n;

  printf("Nhap a = ");scanf("%d",&a);
  printf("Nhap b = ");scanf("%d",&b);
  printf("Nhap c = ");scanf("%d",&c);
  if(a > b && a > c)
    {
    printf("max la : %d",a);
    }
   else if(b > a && b > c)
    {
      printf("max la : %d",b);
    }
  else if(c > a && c > b )
    {
      printf("so lon nhat la: %d",c);
    }
  return 0;
}
