#include<stdio.h>
#include <ctype.h>
#define TRUE 1
#define FALSE 0
// Doc File
/*int main (){
FILE *f;	 			// tao con tro kieu file
    f = fopen("C:\\Users\\CMS1\\Downloads\\nguoi.csv", "r"); 	// mo mot file
    char ch; //thuc hien duyet tung ky tu co trong file vua mo
    while (true) {
        ch = fgetc(f); 			// doc tung ky tu voi ham getc
        if (ch == EOF) break;	 		// kiem tra ket thuc file
        printf("%c", ch); 
    }
    fclose(f);	 			
}
*/
//Viet file
int exist (char* filename)
{ int existed = FALSE;
FILE* f= fopen(filename, "r");
if (f!=NULL){
existed=TRUE;
fclose(f);
}
return existed;
}

int writeFile(char* filename) {
 char c;
 int CTRL_Z = -1;

 if (exist (filename) ==TRUE){
 	printf("The file %s existed. Override it Y/N?", filename);	
 		if (toupper(getchar())=='N') return FALSE; 
 } 
FILE* f= fopen(filename, "w");
fflush(stdin); 
do {
	c=getchar();
	if (c != CTRL_Z) fputc(c, f);
}
while (c!= CTRL_Z);
fclose(f); 
return TRUE;
}

 main (int agrc, char* argv[])
{
	if (argc != 2) printf("Syntax:copy_con filename\n");
	else if (writeFile(argv[1])==TRUE)
			printf("Writing the file %s: done\n",argv[1]);
	else printf("Can not write the file %s \n",argv[1]);
	return 0;
}
	




















/*int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    int GTLN = a[0];
    for (int i 	= 0; i < n; i++){
        if (a[i] > GTLN){
            GTLN = a[i];
        }
    }

    printf("%d",GTLN);

    return 0;
}
*/
