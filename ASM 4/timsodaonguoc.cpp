#include <stdio.h>

int main(){
	int n;
	printf("Nhap so can dao nguoc: ");
	scanf("%d",&n);
	
	int m = 0;
	
	while(n!=0){
		int l;
		l=n%10;
		m=m*10+l;
		n=n/10;
	}
	printf("so dao nguoc la: %d",m);
	return 0;
	
}
