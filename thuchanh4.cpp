#include<stdio.h>

int main(){
	int n, i, wish;
	printf("Ban hãy nhap mot so nguyen duong n: ");
	scanf("%d", &n);
	if(n <= 0){
		printf("So nhap vào ko phai la so nguyen duong. \n");
		return 1;
	}
	printf("Wish cua so nguyen duong %d la: ", n);
	for(i = 1; i<= n; i++){
		if(n % i == 0){
			printf("%d", i);
		}
	}
	printf("\n");
	return 0;
	
}
		
	 
