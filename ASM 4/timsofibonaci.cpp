#include <stdio.h>

int main(){
	int n;
	printf("Nhap vi tri so Fibonaci: ");
	scanf("%d",&n);
	
	if(n==0){
		printf("so fibonaci %d co gia tri bang 0",n);
	}else if(n==1){
		printf("so fibonaci %d co gia tri bang 1",n);
	}else{
		int a=0;
		int b=1;
		int i=2;
		int fi;
		
		while(i<=n){
			fi = a+b;
			a=b;
			b=fi;
			i++;
		}
		printf("so fibonaci %d co gia tri bang %d",n,b);
	}
	return 0;
	
}
