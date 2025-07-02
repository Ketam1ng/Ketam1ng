#include <stdio.h>

int main(){
	
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	
	int tong = 0;
	
	for(int i=1; i<=n; i++){
		if(n % i == 0){
			printf("%d\n",i);
			tong = tong + i;
		}
	}
	printf("tong cua cac uoc la: %d\n",tong);
	return 0;
	
}
