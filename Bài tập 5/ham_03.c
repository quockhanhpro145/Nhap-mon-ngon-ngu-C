#include<stdio.h>

// khoi dinh nghia ham
int Nhap_pt_mang(int a[]);
int Hien_thi_pt_mang(int a[]);
int Hien_thi_tong_chan(int a[]);
int Dem_chan_le_0(int a[]);
int n;
 //khoi ham main
int main(){
  
  printf("Nhap n = ");
  scanf("%d", &n);
  int a[n];
  Nhap_pt_mang(a);
  Hien_thi_pt_mang(a);
  Hien_thi_tong_chan(a);
  Dem_chan_le_0(a);
  return 0;
}
int Nhap_pt_mang(int a[]){
  
  for(int i = 0; i < n; i++){
    printf("a[%d] = ",i);scanf("%d",&a[i]);
  }
  return 0;
}
int Hien_thi_pt_mang(int a[]){
  for(int i = 0; i < n; i++){
    printf("%d\t",a[i]);
  }
  return 0;
}
int Hien_thi_tong_chan(int a[]){
  int chan,le;
  chan = 0;
  le = 0;
  for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0 && a[i] != 0)
        chan = chan + a[i];
      }
  for(int i = 0; i < n; i++){
       if(a[i] % 2 != 0)
        le = le + a[i];
      }
    printf("\ntong so chan = %d",chan);
    printf("\ntong so le = %d",le);
  return 0;
}
int Dem_chan_le_0(int a[]){
  int dem_le,dem_chan;
  dem_chan = 0;
  dem_le = 0;
  for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0 && a[i] != 0)
        dem_chan = dem_chan + 1;
      }
      for(int i = 0; i < n; i++){
            if(a[i] % 2 != 0)
            dem_le = dem_le + 1;
          }
      printf("\nso cac so chan trong a : %d ", dem_chan);
      printf("\nso cac so le trong a : %d ", dem_le);
  return 0;
}
