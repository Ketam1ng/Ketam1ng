#include <stdio.h>

int main(){
	int n;
	printf("Nhap so nguyen bat ki: ");
	scanf("%d",&n);
	
	if(n<=0){
	printf("Vui long nhap lai so nguyen duong");
	}
	
	while(n>=10){
		n = n/10;
	}
	
	int baby;
	baby = n;
	printf("chu so dau tien la: %d\n", baby);
	
}
