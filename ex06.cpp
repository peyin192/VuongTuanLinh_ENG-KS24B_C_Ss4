#include <stdio.h>
int main(){
	int nw,old,number,mney;
	printf("Nhap chi so cong to dien dau thang: ");
	scanf("%d",&old);
	
	printf("Nhap chi so cong to dien cuoi thang: ");
	scanf("%d",&nw);
	
	number = nw - old;
	
	if(0<=number&&number<50){
		mney = number * 10000;
		printf("Tien dien tieu thu thang nay la: %d",mney);
	}
	else if(50<=number&&number<100){
		mney = number * 15000;
		printf("Tien dien tieu thu thang nay la: %d",mney);
	}
	else if(100<=number&&number<150){
		mney = number * 20000;
		printf("Tien dien tieu thu thang nay la: %d",mney);

	}
	else if(150<=number&&number<200){
		mney = number * 25000;
		printf("Tien dien tieu thu thang nay la: %d",mney);

	}
	else{
		mney = number * 30000;
		printf("Tien dien tieu thu thang nay la: %d",mney);

	}
	return 0;
	
}
