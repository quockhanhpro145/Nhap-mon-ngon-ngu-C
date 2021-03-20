#include <stdio.h>

int UCLN(int a, int b){
     if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a = a - b;
        }else{
            b = b - a;
        }
    }
    return a;
   }
int main(void) {
   int a,b;
   printf("Nhap a = ");scanf("%d",&a);
   printf("Nhap b = ");scanf("%d",&b);
   printf("UCLN = %d",UCLN(a,b));
   return 0;
}
