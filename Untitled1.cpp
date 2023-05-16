#include <stdio.h>
#include <iostream>
#include <time.h>

void swap(int a, int b)
{
int t=a;
a=b;
b=t;
}
int main()
{
int x=3, y=7;
swap(&x,&y);
print("x=%d, y=%d",x,y);


///*using namespace std;*/
//int main() {
//int namsinh,namnay,tuoi;
//printf("Nhap nam sinh: ");
//scanf("%d", &namsinh);
///*printf("\nNhap nam nay: ");
//scanf("%d",&namnay);*/
//time_t t = time(0);
//    struct tm *Now = localtime(&t);
//    namnay = Now ->tm_year + 1900;
//    tuoi = namnay - namsinh;
//printf("\nNam nay ban %d tuoi.",tuoi);
	return 0; 
}



/*int a,b,m = 2;
cout << "Nhap a", cin >> a;
cout << "Nhap b", cin >> b;
bool b1, b2;
	
b1 = a == b;
b2 = a<b;

cout << "Bool1 is = " <<
		b1 << "\n";
cout << "Bool2 is = " <<
		b2 << "\n";
bool b3 = true;

if (b3)
	cout << "Yes" << "\n";
else
	cout << "No" << "\n";

int c = false + 5 * m - b3;
cout << c;*/	




	/*int a, b;
	cout << "nhap a:";
	cin >> a;
	cout << "nhap b:";
	cin >> b;
	int tong = a*b;
	cout << "tong:" << tong;*/
	
	
	/*int tuoi;
int khuvuc;
double diem;
char hoten[100];
char diachi[100];
	printf("\n Nhap ten: ");
	scanf("%s",hoten);
	printf("\n Nhap tuoi : ");
	scanf("%d",&tuoi);
	printf("\n Nhap diem: ");
	scanf("%lf",&diem);
	printf("\n Nhap khu vuc: ");
	scanf("%d",&khuvuc);
	printf("\n Nhap dia chi: ");
	scanf("%s",diachi);
	
	printf("\n Ten: %s; Tuoi: %d; Diem: %lf; Dia chi: %s; Khu vuc: %d", hoten, tuoi, diem, diachi, khuvuc);
	*/
	
	/*char c;
	printf("Nhap ky tu:");
	c = getchar();
	printf("\n Ky tu vua nhap:");
	putchar(c);*/
		
