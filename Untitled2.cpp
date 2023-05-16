#include <stdio.h>
#include <string.h>
int main(){
	int so_luong;
	char ten_sp[30];
	double don_gia;
	
	printf("Nhap ten san pham:");
	scanf ("%s",ten_sp);
	gets(ten_sp);
	fflush(stdin);
	printf("Ten san pham: %s",ten_sp);
	printf("Nhap so luong + don gia: ");
	scanf("%d %lf",&so_luong, &don_gia);
	printf("Tien phai tra:%lf ;\n Thue gia tri gia tang: %lf ",so_luong * don_gia, 0.1*don_gia);
	
	return 0;
}
