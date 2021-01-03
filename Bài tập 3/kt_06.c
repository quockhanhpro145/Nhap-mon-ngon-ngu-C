#include <stdio.h>
#include <math.h>

int main(void) {
  int h;
  printf("Nhap h = ");scanf("%d",&h);
  if(h > 0){
    int i,j;
    for(i = 1; i <= h; i++){
      for(j = 1; j < h * 2; j++){
        if(abs(h - j)<= (i - 1)){// abs trị tuyệt đối
            printf(" * ");
        } else {
          printf("   ");
        }
      }
        printf("\n");
    }
  } else {
    printf("Nhap h > 0");
  }
  return 0;
}// câu a

#include <stdio.h>

int main(void) {
  int h,k;
  printf("Nhap h = ");scanf("%d",&h);
  k = h - 1;
  int i,j;
    for(i = 0; i < h - 1; i++){
      for(j = 0; j < 2 * h - 1; j++){
        if(j == k - i || j == k + i){ printf(" * ");// || hoặc
        } else {
          printf("   ");
        }
      }
        printf("\n");
    } for(i = 0; i < 2 * h - 1; i++) printf(" * ");
  return 0;
}// câu b
