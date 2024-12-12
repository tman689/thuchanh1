#include<stdio.h>

int main(){
	float exchange_rates[] = {23500, 25000, 29000, 200, 1.0/23500, 1.0/25000, 1.0/29000, 1.0/200};
	int choice;
    float amount, result;
    printf("=========== CHUONG TRINH CHUYEN DOI TIEN TE ===========\n");
    printf("1. USD to VND\n");
    printf("2. EUR to VND\n");
    printf("3. GBP to VND\n");
    printf("4. JPY to VND\n");
    printf("5. VND to USD\n");
    printf("6. VND to EUR\n");
    printf("7. VND to GBP\n");
    printf("8. VND to JPY\n");
    printf("Nhap don vi tien te ban muon chuyen doi (1-8): ");
    scanf("%d", &choice);
    if (choice < 1 || choice > 8){
        printf("Lua chon khong hop le!\n");
        return 1;
    }
     printf("Nhap so tien: ");
    scanf("%f", &amount);
    result = amount * exchange_rates[choice - 1];
    switch (choice) {
        case 1: printf("%.2f USD = %.2f VND\n", amount, result); break;
        case 2: printf("%.2f EUR = %.2f VND\n", amount, result); break;
        case 3: printf("%.2f GBP = %.2f VND\n", amount, result); break;
        case 4: printf("%.2f JPY = %.2f VND\n", amount, result); break;
        case 5: printf("%.2f VND = %.2f USD\n", amount, result); break;
        case 6: printf("%.2f VND = %.2f EUR\n", amount, result); break;
        case 7: printf("%.2f VND = %.2f GBP\n", amount, result); break;
        case 8: printf("%.2f VND = %.2f JPY\n", amount, result); break;
    }
    return 0;
}
