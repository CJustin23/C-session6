#include<stdio.h>
int main(){
	int num; 
	int n=0; 
	printf("nhap so nguyen bat ki ");
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		if(num%i==0){
		n++	;
		} 
	} 
if(n==2){
	printf("day la so nguyen to"); 
} else{
	printf("day ko phai so  nguyen to "); 
} 
return 0;
}
