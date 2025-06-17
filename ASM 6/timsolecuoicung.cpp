#include <stdio.h>

int main(){
	int size;
	do{
		printf("Nhap so luong phan tu cua mang: ");
		scanf("%d",&size);
	}while(size<=0);
	
	int player[size];
	
	for(int i=0; i<size; i++){
		printf("Nhap phan tu vao mang: ");
		scanf("%d",&player[i]);
	}
	
	for(int i = size - 1; i>0; i--){
		if(player[i] % 2==1){
		printf("So le cuoi cung la: %d",player[i]);
		break;
		}
	}
	
}
