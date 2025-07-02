#include <stdio.h>

int main(){
	int n, max=0;
	printf("Nhap so nguyen: ");
	scanf("%d",&n);
	
	if(n<=0){
		printf("Phai la so nguyen duong");
		return 1;
	}
	
	int rat;
	while(n!=0){
		rat=n%10;
		if(rat>max){
			max=rat;
		}
		n=n/10;
	}
	printf("So lon nhat la: %d\n", max);
}
