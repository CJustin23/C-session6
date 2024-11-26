#include<stdio.h>
int main(){
	int n;// so luong can in ra
	int num1,num2;// 2 so dau cua day la 0 va 1
	num1=0;
	num2=1;
	int a;
	printf("nhap so luong day fibonaci ");
	scanf("%d",&n);
	if(n==1){
		printf("0");
	}
	if(n==2){
		printf("0\n");
		printf("1");
	}
	if(n>=3){
	printf("0\n");
	printf("1\n");
	for (int i=3;i<=n;i++){
		a = num1+num2;
		printf("%d \n",a);
		num1=num2;
		num2=a;
	}
}
	return 0;
}
