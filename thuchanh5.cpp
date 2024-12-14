#include<stdio.h>

int main(){
	int n, i, isprime = 1;
	printf("Nhap mot so nguyen duong: ");
	scanf("%d", &n);
	if(n <=1){
		printf("Khong ph?i so nguyen to: ");
		return 0;
	}
	for (i = 2; i < n; i++){
		if(n % i == 0){
			isprime = 0;
			break;
		}	    
	}
	if(isprime)
	  printf("%d là so nguyen to. \n", n);
	else  
	   printf("%d khong phai là so nguyen to. \n", n);
	
	return 0;
}
