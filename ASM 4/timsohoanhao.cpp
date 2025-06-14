#include <stdio.h>

int main(){
	int n;
	printf("Nhap so hoan hao: ");
	scanf("%d",&n);
	
	int i = 1;
	int s = 0;
	
	while(i<n){
		if(n%i==0){
			s = s + i;
		}
		i = i + 1;
	}
	
	if(s==n && n>0){
		printf("%d la so hoan hao",n);
	}else{
		printf("%d khong la so hoan hao",n);
	}
	
}
