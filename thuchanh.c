#include <stdio.h>

int main(){
    int soGioLam, luongGio;
    float luongCoBan, phuCap, tongLuong;
    printf("Nhap so gio lam trong thang: ");
    scanf("%d", &soGioLam);
    printf("Nhap muc luong theo gio: ");
    scanf("%d", &luongGio);
    
	luongCoBan = soGioLam * luongGio;
	if (soGioLam > 160){
        phuCap = luongCoBan * 0.1;
    } else {
        phuCap = 0;
    }
     tongLuong = luongCoBan + phuCap;
      printf("\nLuong co ban: %.2f\n", luongCoBan);
    printf("Phu cap: %.2f\n", phuCap);
    printf("Tong luong: %.2f\n", tongLuong);

    return 0;
}


