#include <stdio.h>

int main(){
	//INPUT n
	int num;
	printf("Nhap num = ");
	scanf("%d",&num);
	
	int r;
	r = num % 2; // % : lay du cua phep chia
	
	if(r == 0){ // == may tinh hieu la so sanh
		// YES
		printf("Number is the even");
	}else{
		// NO
		printf("Number is the odd");
	}
	
}
