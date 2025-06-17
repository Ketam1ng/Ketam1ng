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
	
	int chill = -1;
	
	for(int i=0; i<size; i++){
		if(player[i]>0){
			if(chill==-1 || player[i]<player[chill]){
				chill=i;
			}	
		}
	}
	if(chill==-1){
		printf("khong co so duong");
	}else{
		printf("so duong nho nhat trong mang: %d",player[chill]);
	}
}
