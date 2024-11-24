#include <stdio.h>
int main(){
	int number1,number2,number3;
	
	printf("Nhap vao 3 so nguyen\n");
	
	printf("Nhap vao so nguyen thu nhat: ");
	scanf("%d",&number1);
	
	printf("Nhap vao so nguyen thu 2: ");
	scanf ("%d",&number2);
	
	printf("Nhap vao so nguyen thu 3: ");
	scanf("%d",&number3);
	
	if(number3>number1&&number3<number2 or number3>number2&&number3<number1){
		printf("So thu 3 nam trong khoang giua so thu 2 va so thu nhat");
	}
	else{
		printf("So thu 3 khong nam trong khoang giua so thu 2 va so thu 1");
	}
	
	return 0;

	
}








