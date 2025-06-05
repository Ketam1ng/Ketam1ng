#include <stdio.h>

int main(){
	int d;
	printf("Nhap ngay: ");
	scanf("%d", &d);
	int m;
	printf("Nhap thang: ");
	scanf("%d", &m);
	int y;
	printf("Nhap nam: ");
	scanf("%d", &y);
	
	int d1;
	if(m==4||m==6||m==9||m==11){	
		d1 = 30;
	} else if(m==1||m==3||m==5||m==7||m==10||m==12){
		d1 = 31;
	} else if(m==2){
		if((y % 400 == 0)||(y % 4 == 0 && y % 100 != 0)){
			d1 = 29;
		}else{
			d1 = 28;
		}
	}else{
		printf("Thang khong ton tai");
		return 1;
	}
	
	d = d + 1;
	if(d>d1){
		d = 1;
		m = m+1;
		if(m>12){
			m = 1;
			y = y+1;
		}
	}
	printf("Ngay tiep theo la: %d / %d / %d", d,m,y);
	return 0;
	
}


