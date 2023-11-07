#include <cstdio>

int main () {
    float num;
    printf("Nhap so diem tu 1 den 10:");
    scanf("%f, &num");
    if(num < 0 || num >=10) {
        printf("nhap dung so diem tren thang diem 10");
    } else if (num >0 &&  num < 3,5) {
        printf("hoc luc kem");
    } else if (num >= 3,5 && num < 5) {
        printf("hoc luc yeu");
    }
    return 0;
}