#include <stdio.h>

int main(){
	int n;
	printf("Nhap so n: ");
	scanf("%d",&n);
	
	int s;
	int cnt=0;
	
	while(cnt<n){
		int x;
		x = x+1;
		s=s + x;
		cnt++;
	}
	printf("Tong: %d", s);
	
}
