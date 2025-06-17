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
	
	int x;
	printf("Nhap gia tri can tim: ");
	scanf("%d",&x);
	
	for(int i=0; i<size; i++){
		if(player[i]==x){
			printf("%d co trong mang",x);
		}
	}
	
}
