#include<stdio.h>
int main(){
	int month,year;
	int n=0; 
	printf("nhap so nam ");
	scanf("%d",&year);
	printf("nhap so thang "); 
	scanf("%d",&month) ;
	while(month<1||month>12){
		printf("nhap so nam ");
		scanf("%d",&year);
	} 
	while(year<0){
		printf("nhap so thang "); 
		scanf("%d",&month) ;
	} 
	if(year%4!=0){
		// ko phai  
	} else{
		if(year%100==0){
			 if(year%400==0){
			 	// la nam nhuan 
			 	n=1; 
			 } else{
			 	//khong phai 
			 } 
		}else{
			// lla nam nhuan
			n=1; 
		} 
	}
		switch(month){
				case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				printf("thang %d co 31 ngay \n ",month);
				break; 
				case 4: case 6: case 9: case 11:
				printf("thang %d co 30 ngay \n",month);
				break; 
				case 2:
				printf("thang 2 co 29 ngay \n"); 
				break; 
				default: 
				printf("ko hop le"); 
			} 
	 if(n==0){
	printf("nam nay co 365 ngay");
	 } else{
	 	printf("nam nay co 366 ngay "); 
	 } 

	return 0; 
} 
