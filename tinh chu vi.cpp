#include<stdio.h>
int tinhchuvi(int a , int b , int c){
	int cv=a+b+c;
	return cv;
	
}
int main(){
	int x = 5;
	int y = 7;
	int z = 6;
	int v = tinhchuvi (x,y,z);
	printf("chu vi = %d",v);
}
