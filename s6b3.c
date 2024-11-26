#include<stdio.h>
int main(){
	int pass = 12345;
	int check;
	printf("nhap mat khau cua may tinh ");
	scanf("%d", &check);
	if(check==12345){
		printf("mat khau chinh xac");
	}else{
		printf("sai mat khau");
	}
	return 0;
}
