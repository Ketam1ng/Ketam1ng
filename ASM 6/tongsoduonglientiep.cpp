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

	int sum=0;
	int paradise=0;
	
	for(int i=0; i<size; i++){
		if(player[i]>0){
			paradise=paradise+player[i];
			if(paradise>sum){
				sum=paradise;
			}
		}else{
			paradise=0;
		}
	}
	printf("tong so duong lien tiep lon nhat la: %d",sum);
	
}
