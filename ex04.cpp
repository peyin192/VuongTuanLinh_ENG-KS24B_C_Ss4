#include <stdio.h>
int main(){
	int month;
	printf("Nhap thang : ");
	scanf("%d",&month);
	
	
	 if(month==1 or month==3 or month==5 or month==7 or month==8 or month==10 or month==12){
	 	printf("Thang %d co 31 ngay",month);
	 }
	 else if(month==4 or month==6 or month==9 or month==11){
	 
	 	printf("Thang %d co 30 ngay",month);
	 }
	 else if(month==2){
	 	printf("Thang %d co 28 ngay",month);
	 }
	 else{
	 	printf("Thang khong hop le");
	 }
	 
	 return 0;
	
}
