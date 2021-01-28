#include <stdio.h>
 
int LN_n(int a[], int n)
{
    int LN_n = a[0];
    for (int i = 1; i < n; i++)
        if (LN_n < a[i])
            LN_n = a[i];
    return LN_n;
}
int giaiThua(int n)
{
    if (n == 1)
        return 1;
    return n * giaiThua(n - 1);
}
int main(){
  int n;
  int a[n];
  printf("Nhap n = ");scanf("%d",&n);
  for(int i =0; i < n; i++){
        printf("Nhap a[%d] = ",i);
        scanf("%d",&a[i]);
      }
  printf("gia tri lon la: %d",LN_n(a,n));
  printf("\nGiai thua %d la: %d", n, giaiThua(n));
  return 0;
}
