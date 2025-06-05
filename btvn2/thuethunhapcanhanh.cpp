#include <stdio.h>

int main(){
	int n;
	printf("Nhap so tien thu nhap ca nhan 1 thang: ");
	scanf("%d",&n);
	
	if(n<11000000){
		printf("Khong phai nop thue");
	}else{
		float n1;
		n1=n-11000000;
		printf("n1=%f",n1);
		
		float t;
		if(n1<=5000000){
			t=n1*0.05;
			printf("So thue phai nop: %f",t);
		}else{
			if(n1<=10000000){
				t=n1*0.1;
				printf("So thue phai nop: %f",t);
			}else{
				if(n1<=18000000){
					t=n1*0.15;
					printf("So thue phai nop: %f",t);
				}else{
					if(n1<=32000000){
						t=n1*0.2;
						printf("So thue phai nop: %f",t);
					}else{
						t=n1*0.25;
						printf("So thue phai nop: %f",t);
					}
				}
			}
		}
	}
	
	
}
