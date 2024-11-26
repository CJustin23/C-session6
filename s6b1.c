#include<stdio.h>
int main(){
	int number;
	int sum =0;
	for(int i=1;i<6;i++){
		printf("nhap vao so nguyen thu %d ",i);
		scanf("%d",&number);
		if(number%2!=0){
			sum += number;
		}
	}
	printf("tong cac so le la %d ",sum);
return 0;
}
