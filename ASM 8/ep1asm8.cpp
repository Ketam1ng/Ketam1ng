#include <stdio.h>

int main(){
	int n, sum = 0;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	
	if (n < 0){
		n = -n;
	}
	while (n != 0){
		sum = sum + n % 10;
		n = n/10;
	}
	printf("Tong cac chu so la: %d\n", sum);
	
	return 0;
}
