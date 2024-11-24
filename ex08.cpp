#include <stdio.h>
int main(){
	int a,b,c;
	
	printf("Nhap 3 canh\n");
	
	printf("Nhap canh a: ");
	scanf("%d",&a);
	
	printf("Nhap canh b: ");
	scanf("%d",&b);
	
	printf("Nhap canh c: ");
	scanf("%d",&c);
	
	if(a+b>c&&a+c>b&&b+c>a){
		printf("Day la 3 canh cua tam giac");
}
	else{
		printf("Day khong phai la 3 canh cua tam giac");
	}
		
	

}
