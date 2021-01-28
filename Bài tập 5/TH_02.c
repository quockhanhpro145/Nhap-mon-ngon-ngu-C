#include <stdio.h>

int main(){
  int n,s;
  s = 0;
  printf("Nhap n = ");
  scanf("%d",&n);
  for(int i = 1; i <= n; i++)
  s = s + i;
  printf("\nS = 1 + 2 +...+  = %d ",s);
  return 0; 
}
