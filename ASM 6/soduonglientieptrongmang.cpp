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

	int baby=0;
	int hell=0;
	
	for(int i=0; i<size; i++){
		if(player[i]>0){
			hell++;
			if(hell>baby){
				baby=hell;
			}
		}else{
			hell=0;
		}
	}
	printf("so duong lien tiep trong mang la: %d",baby);
	
}
