#include <stdio.h>

int main(){
	int n;
	printf("Nhap so n: ");
	scanf("%d",&n);
	
	int i = n - 1;
	while(i>0){
		if(i%2==0 && i%3==0){
			printf("%d\n",i);
			break;
		}
		i--;
	}
	return 0;
	
}
