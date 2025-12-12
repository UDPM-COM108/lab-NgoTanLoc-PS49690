#include <stdio.h>
int main() {
 // BAI TAP DEMO SLIDE if... else if... else
    double dtb;
    printf("nhap diem trung binh:\n ");
    scanf("%lf", &dtb);
    if(dtb >= 9)
        printf(" Xuat sac");
    else if(dtb >= 8)
        printf("Gioi");
    else if(dtb >= 7)
        printf("Kha");
    else if(dtb >= 5)
        printf("Trung binh");
    else
        printf("Yeu");

 // bai tap demo slide switch... case
    printf("\nViet Nam co bao nhieu dan toc anh em?\n");
    printf("a. 52\nb. 54\nc. 53\nd. 55\n");
    printf("xinn moi chon dap an (abcd): ");
    char dap_an;
    scanf(" %c", &dap_an);
    switch(dap_an) {
        case 'a':
          printf("Ban da chon sai");
          break;
        case 'b':
          printf("Ban da chon dung");
          break;
        case 'c':
          printf("Ban da chon sai");
          break;
        case 'd':
          printf("Ban da chon sai");
          break;
        default:
          printf("Dap an khong hop le");
          break;
    }
 return 0;
}