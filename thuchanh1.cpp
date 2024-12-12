#include<stdio.h>
#include<string.h>

struct Sinhvien{
	int stt;
	char Ten[50];
	float toan, vatly, hoa ,sinh ,van, diemTB;
};

int main(){
	{1, "Nguyen Van A", 7.5, 7.0, 5.5, 8.5, 7.5, 7.4};
	{2, "Nguyen Van b", 7.0, 8.5, 9.0, 5.0, 6.5, 7.7};
	{3, "Nguyen Van c", 6.5, 7.2, 6.5, 10.0, 5.5, 7.2};
};
int n = sizeof(sv) / sizeo(sv[0]);
printf("%-5s %-25s %-8s %-8s %-8s %-8s %-8s %-8s\n", "stt", "Ten", "toan", "vatly", "hoa", "sinh", "van", "diemTB");
for (int i = 0; i < n; i++){
    printf("%-5d %-25s %-8.1f %-8.1f %-8.1f %-8.1f %-8.1f %-8.1f\n",
    sv[i].stt, sv[i].hoTen, sv[i].toan, sv[i].vatLy, sv[i].hoa, sv[i].sinh, sv[i].van, sv[i].diemTB);
    }

    return 0;
}
 

