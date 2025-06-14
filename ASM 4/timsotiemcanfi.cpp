#include <stdio.h>

int main(){
	int n;
	printf("Nhap 1 so bat ki: ");
	scanf("%d",&n);
	
	int a=0;
	int b=1;
	int fi=a;
	
	while(b<=n){
		fi=b;
		int fi=a+b;
		a=b;
		b=fi;
		
	}
	printf("so tiem can duoi %d la: %d",n,fi);
	
}
