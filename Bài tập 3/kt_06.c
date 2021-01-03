#include <stdio.h>
#include <math.h>

int main(void) {
  int h;
  printf("Nhap h = ");scanf("%d",&h);
  if(h > 0){// câu a
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
  int k,a,b ;
  k = h -1;
  for(a = 0; a < h - 1; a++){// câu b
      for(b = 0; b < 2 * h - 1; b++){
        if(b == k - a || b == k + a){ printf(" * ");// || hoặc
        } else {
          printf("   ");
        }
      }
        printf("\n");
    } for(a = 0; a < 2 * h - 1; a++) printf(" * ");
  return 0;
}
