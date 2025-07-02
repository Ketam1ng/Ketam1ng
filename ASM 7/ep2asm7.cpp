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
	printf("Nhap x: ");
	scanf("%d",&x);
	
	int kc= player[0] - x;
	if(kc<0){
		kc = -kc;
	}
	int gt = player[0];
	
	for(int i=0; i<n;i ++){
		int h= player[i] - x;
		if(h<0){
			h=-h;
		}
		if(h<kc){
			kc = h;
			gt = player[i];
		}
	}
	
	printf("Vi tri gan nhat: %d",gt);
	
}
