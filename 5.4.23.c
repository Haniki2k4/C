#include <stdio.h>
#include <math.h>

int main (){
	
	/*int uscln(int a,int b){
		while (a!=b){
			if (a>b) a-=b;
			else b-=a;
			return 0;
		}
	}*/
	
	
	

int n, i;
    int min = 1;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    if (n < 2)
    {
        min = 0;
    }
    else
    {
        for (i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                min = 0;
                break;
            }
        }
    }

    if (min == 1)
    {
        printf("%d la so nguyen to", n);
    }
    else
    {
        printf("%d khong phai la so nguyen to", n);
    }



/*long tong(long x,long y)
{
    return x+y;
}
long tich(long x,long y)
{
    return x*y;
}
int main()
{
    long x,y ;
    printf("Nhap x, y: ");
    scanf("%d %d",&x,&y);
    printf("\n Tong cua a va b:%ld",tong(x, y));
    printf("\n Tich cua a va b:%ld",tich(x, y));*/
    
    return 0;
}
 
 
 
 /*int n, i, sum = 0;
    printf("Nhap mot so nguyen duong n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) {
        sum += i;
    }
    printf("Tong tu 1 den %d la %d", n, sum);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }
    printf("\nTong tu 1^2 den %d la %d", n, sum);*/
    
    
    
    /*int TienDT (int sophut){
    	int tien1phut=980;
    	return tien1phut * sophut;
	}
	int main(){
		printf("Nau chao: ");
		int tiennauchao;
		scanf("%d", tiennauchao);
		return tiennauchao	
	}*/



//void TinhTong (int a, int b)
//{	int S;
//	S = a + b;
//	printf("Tong= %d",S);
//}



//void NhapXuatTong()
//{	int x, y;
//	printf("Nhap 2 so nguyen: ");
//	scanf("%d %d",&x,&y);
//	printf("%d cong %d bang %d",x,y,x+y);
//}
