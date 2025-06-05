#include <stdio.h>

int main(){
	int n;
	printf("Nhap so tien can rut ( chia het cho 10000): ");
	scanf("%d",&n);
	
	if(n % 10000 != 0 || n <= 0){
		printf("Nhap lai so tien can rut ( chia het cho 10000)");
		return 1;
	}
		int to500 = n / 500000;
		n = n % 500000;
		printf("So to menh gia 500k: %d", to500);
		
		int to200 = n / 200000;
		n = n % 200000;
		printf("So to menh gia 200k: %d", to200);
		
		int to100 = n /100000;
		n = n%100000;
		printf("So to menh gia 100k: %d", to100);
		
		int to50 = n /50000;
		n = n % 50000;
		printf("So to menh gia 50k: %d", to50);
		
		int to20 = n/20000;
		n=n%20000;
		printf("So to menh gia 20k: %d", to20);
		
		int to10 = n/ 10000;
		n=n%10000;
		printf("So to menh gia 10k: %d", to10);
		
		return 0;
}
