#include <stdio.h>
#include <math.h>
int main() {
  int n; 
  double *arr; 
  double avg; 
  int closest; 

  printf("Nhap so luong phan tu: ");
  scanf("%d", &n);
  arr = (double *)malloc(sizeof(double)); 

  printf("Nhap cac phan tu: ");
  for (int i = 0; i < n; i++) {
    scanf("%lf", &arr [i]);
    avg = (avg * i + arr [i]) / (i + 1);

    if (i < n - 1) {
      arr = (double *)realloc(arr, (i + 2) * sizeof(double));
    }
  }

  printf("Gia tri trung binh la %.2f\n", avg);

  // khoi tao closest voi phan tu dau tien
  closest = 0;
  for (int i = 1; i < n; i++) {
    if (fabs(arr [i] - avg) < fabs(arr [closest] - avg)) {
      closest = i;
    }
  }

  printf("Phan tu gan nhat voi gia tri trung binh la %.2f\n", arr [closest]);
  printf("Khoang cach cua phan tu gan nhat voi gia tri trung binh la %.2f\n", fabs(arr [closest] - avg));


  free(arr);
  
  return 0;
}
