#include <stdio.h>
#include <math.h>
main (){
	
	/*int a;
	printf ("Nhap mot so: ");
	scanf("%d",&a);
	if(a%2==0) {
		printf ("\n so %d la so chan", a);
	}
	else{
		printf ("\n so %d la so le", a);
	}*/
	
	/*int a,b;
	double x;
		printf("Nhap a va b: ");
		scanf("%d %d", &a,&b);
	if (a==0 && b!=0) 
		printf("\n Vo nghiem");
	else if (a==0 && b==0)
		printf("\n Vo so nghiem");
	else 
		printf("\n x=%.2lf", -(1.0*b)/a);*/
		
	/*int a,b,c;
	double delta,x,x1,x2;
		printf("Nhap a,b,c: ");
		scanf("%d %d %d", &a,&b,&c);
	if (a==0 && b!=0) 
		printf("\n Vo nghiem");
	else if (a==0 && b==0)
		printf("\n Vo so nghiem");
	delta = b*b-4*a*c;
	if (delta >0)
		printf("\n 2 nghiem phan biet: x1=%.2lf \n x2=%.2lf", -(1.0*b)+sqrt(delta)/2*a,-(1.0*b)-sqrt(delta)/2*a );
	else if (delta = 0)
		printf("\n Nghiem kep: x=%.2lf",-(1.0*b)/a);
	else 
		printf("\n Vo nghiem");
	
	long long i, S=0;
	for (i=0; i<100000000; i++)
		S=S+i;
	printf ("\n Tong 1m so nguyen duong dau tien= %lld",S);*/
	
	/*int x;
	int sum=0;
	do {
		printf("Nhap x: ");
		scanf("%d",&x);
		sum += x;
	}
	while (x!=0);
	printf("\nSum: %d", sum);*/
	
	/*scanf("%d",&a);
	if((a>=50)&&(a<=200)) {
			printf ("%d thuoc trong khoang 50 den 200", a);
	}
	else{
		printf ("%d khong thuoc trong khoang 50 den 200", a);
	}*/
	
	 int n, i, sum = 0;
    printf("Nhap mot so nguyen duong n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) {
        sum += i;
    }
    printf("Tong tu 1 den %d la %d", n, sum);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }
    printf("\nTong tu 1^2 den %d la %d", n, sum);
	
return 0;
}












	
