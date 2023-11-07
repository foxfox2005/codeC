#include <cstdio>

int main () {
    float num;
    printf("Nhap so diem tu 1 den 10:");
    scanf("%f", &num);
    if(num < 0 || num > 10) {
        printf("nhap dung so diem tren thang diem 10");
    } else if ( num < 3.5) {
        printf("hoc luc kem");
    } else if ( num < 5) {
        printf("hoc luc yeu");
    } else if ( num >=5 && num < 6.5){
        printf("hoc luc trung binh");
    } else if ( num >=6.5 && num <8) {
        printf("hoc luc kha ");
    } else if ( num >=8 && <9) {
        printf("hoc sinh gioi")
    } else if ( num >=9 && num = 10) {
        printf("hoc luc xuat sac");
    }
    return 3;
}