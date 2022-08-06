#include<stdio.h>

int main() {
	int n, t; // n: ngay   t: thang
	printf("nhap t =");
	scanf("%d",&t);
	printf("nhap n =");
	scanf("%d",&n);

	int ngay;
	int thu;

	if(t==1) {
		ngay = n;
		thu = ngay%7;
	} else if(t==2) {
		ngay = n + 31;
		thu = ngay%7;
	} else if(t==3) {
		ngay = n + 31 + 28;
		thu = ngay%7;
	} else if(t==4) {
		ngay = n + 31 + 28 + 31;
		thu = ngay%7;
	} else if(t==5) {
		ngay = n + 31 + 28 + 31 + 30;
		thu = ngay%7;
	} else if(t==6) {
		ngay = n + 31 + 28 + 31 + 30 + 31;
		thu = ngay%7;
	} else if(t==7) {
		ngay = n + 31 + 28 + 31 + 30 + 31 + 30;
		thu = ngay/7;
	} else if(t==8) {
		ngay = n + 31 + 28 + 31 + 30 + 31 + 30 + 31;
		thu = ngay%7;
	} else if(t==9) {
		ngay = n + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
		thu = ngay%7;
	} else if(t==10) {
		ngay = n + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
		thu = ngay%7;
	} else if(t==11) {
		ngay = n + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
		thu = ngay%7;
	} else if(t==12) {
		ngay = n + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
		thu = ngay%7;
	}
	
	if(thu == 1){
		printf("Thu 2");
	}
	else if(thu == 2){
	printf("Thu 3");
	}
	else if(thu == 3){
		printf("Thu 4");
	}
	else if(thu == 4){
		printf("Thu 5");
	}
	else if(thu == 5){
		printf("Thu 6");
	}
	else if(thu == 6){
		printf("Thu 7");
	}
	else if(thu == 7){
		printf("Chu nhat");
	}
	
	printf("\nngay thu %d trong nam", ngay);
	
	
	
	
	
	
	
}
