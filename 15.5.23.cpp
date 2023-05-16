#include <stdio.h>

//bai1
/*main() {
	int n,i;
	long long giaithua = 1;
	printf("Nhap 1 so nguyen duong: ");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		giaithua *= i;
	}
	printf("Giai thua cua %d la: %lld",n,giaithua);
	return 0;
}*/



//bai2
/*int main (){

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
return 0;
}*/




//bai3
/*int main()
{
int n, i;
long long giaithua = 1, S = 0;

printf("Nhap mot so nguyen duong n: ");
scanf("%d", &n);

for (i = 1; i <= n; ++i)
{
giaithua *= i;
S += giaithua;
}

printf("S = %lld", S);

return 0;
}*/





//bai4
/*main(){
	int a,b,n;
	int S=0;
	
	printf("Nhap a b n: ");
	scanf("%d %d %d",&a, &b, &n);
	if( a >= n || b >= n) return 0;
	for (int i = 1; i < n; i++)
	{
		if(i%a==0 && i%b!=0)
		{
		S+=i;}
	}
	printf("\nTong cac so nguyen duong phu hop dieu kien bang: %d",S);
	
return 0;	
	
}*/




//bai5
/*int snt(int n){
    for (int i = 2; i <= n / 2; i++){
    if (n % i == 0) return 0;
    } 
	if (n < 2) return 0;
    return 1;
	}

main(){
	int n;
	int S=0;
	printf("Nhap n: ");
	scanf("%d",&n);
	for (int i=2; i < n; i++){
		if(snt(i)){
			printf("%5d",i);
			S+=i;
		}
	}
	printf("\nTogn cac so nguyen to <=%d: %d",n, S);
	return 0;
}*/




//bai6
/*int USCLN(int gt1, int gt2){
	while(gt1!=gt2){
		if (gt1>gt2)
			gt1-=gt2;
		else gt2-=gt1;
	}
	return gt1;
}

int BSCNN(int gt1, int gt2){
	if(gt1==gt2)
		return gt1;
	return (gt1*gt2)/USCLN(gt1,gt2);
}
main(){
	int n1, n2;
	printf("Nhap 2 so: ");
	scanf("%d %d",&n1,&n2);
	printf("\nUSCLN: %d \nBSCNN: %d",USCLN(n1,n2),BSCNN(n1,n2));
return 0;	
}*/




//bai7


