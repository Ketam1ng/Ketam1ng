#include <stdio.h>

int main(){
	int a,b;
	
	printf("Nhap so nguyen a: \n");
	scanf("%d",&a);
	printf("Nhap so nguyen b: \n");
	scanf("%d",&b);
	
	while(b != 0){
		int c = a % b;
		a = b;
		b = c;
	}
	return a;
	
	printf("uoc chung lon nhat la: %d",a);
	
	int boi = (a*b)/a;
	printf("boi chung nho nhat la: %d",boi);
	
}
