#include <stdio.h>
int main(){
	int day,month,year,daystr;
	
	printf("Nhap ngay, thang, nam\n");
	
	printf("Nhap ngay: ");
	scanf("%d",&day);
	
	printf("Nhap thang: ");
	scanf("%d",&month);
	
	printf("Nhap nam: ");
	scanf("%d",&year);
	
	
	
	
	
	if(month>0&&month<=12){
		printf("Thang hop le\n");
	}
	else{
		printf("Thang khong hop le\n");
	}
	
	
		switch(month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		daystr == 31;
		break;
		
		case 4: case 6: case 9: case 11:
		daystr == 30;
		break;
		
		default:
			daystr == 28;
		
	}
	
	if(0<day or day<daystr){
		printf("Ngay hop le\n");
	}
	else{
		printf("Ngay khong hop le\n");
	}
	
	
	
	if(year>0){
		printf("Nam hop le\n");
	}
	else{
		printf("Nam khong hop le\n");
	}
	
	
	printf("Ngay %d/%d/%d",day,month,year);
	
	
	
	
	}
	

