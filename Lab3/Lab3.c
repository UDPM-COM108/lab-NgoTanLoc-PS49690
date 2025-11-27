#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int luachon;
    do {
        fflush(stdin);
        system("cls");
        printf("________________________________________\n");
        printf("| Welcome to Ngo Tan Loc - Lab 3 |\n");
        printf("----------------- MENU -----------------\n");
        printf("1. Bai 1: Xep loai hoc luc\n");
        printf("2. Bai 2: Giai phuong trinh bac nhat\n");
        printf("3. Bai 3: Giai phuong trinh bac hai\n");
        printf("4. Bai 4: Tinh tien dien\n");
        printf("0. Thoat chuong trinh\n");
        printf("Xin moi ban nhap lua chon: ");
        scanf("%d", &luachon);
        switch(luachon) {
            case 1: {
                    double diemTB;
                    printf("Nhap diem trung binh:");
                    scanf("%lf", &diemTB);
                    if(diemTB>=9) {
                        printf("Xuat sac\n");
                    } else if (diemTB >= 8) {
                        printf("Gioi\n");
                    } else if (diemTB >= 7) {
                        printf("Kha\n");
                    } else if (diemTB >= 5) {
                        printf("Trung binh\n");
                    } else {
                        printf("Yeu!!!\n");
                    }
                    break;
                }
            case 2: {
                double a, b;
                printf("\nNhap he so a va b: ");    
                scanf("%lf%lf", &a, &b);
                if (a==0) {
                    if (b==0) {
                        printf("Phuong trinh vo so nghiem\n");
                    } else {
                        printf("Phuong trinh vo nghiem\n");
                    }
                } else {
                    double x = -b/a;
                    printf("Phuong trinh co nghiem x = %.2lf\n", x);
                }
                break;
            }
            case 3: {
                double a, b, c;
                printf("Nhap he so a, b, c: ");     
                scanf("%lf%lf%lf", &a, &b, &c);
                double delta = b*b - 4*a*c;
                if (a == 0) {
                    if (b == 0) {
                        printf("Phuong trinh vo nghiem\n");
                    } else {
                        double x = -c / b;
                        printf("Phuong trinh co nghiem x = %.2lf\n", x);
                    }
                } else {
                    if (delta < 0) {
                        printf("Phuong trinh vo nghiem\n");
                    } else if (delta == 0) {
                        double x = -b / (2 * a);
                        printf("Phuong trinh co nghiem kep x1 = x2 = %.2lf\n", x);
                    } else {
                        double x1 = (-b + sqrt(delta)) / (2 * a);
                        double x2 = (-b - sqrt(delta)) / (2 * a);
                        printf("Phuong trinh co hai nghiem phan biet:\n");
                        printf("x1 = %.2lf\n", x1);
                        printf("x2 = %.2lf\n", x2);
                    }
                }
                break;
            }
            case 4: {
                double bac1, bac2, bac3, bac4, bac5, bac6;
                int sodien;
                printf("Nhap so dien tieu thu da su dung trong thang: ");
                scanf("%d", &sodien);
                if (sodien <= 50) {
                    bac1 = sodien * 1678;
                    printf("So tien dien phai tra la: %.2lf VND", bac1 );
                } else if (sodien >= 51 && sodien <= 100) {
                    bac2 = sodien * 1734;
                    printf("So tien dien phai tra la: %.2lf VND", bac2 );
                } else if (sodien >= 101 && sodien <= 200) {
                    bac3 = sodien * 2014;
                    printf("So tien dien phai tra la: %.2lf VND", bac3 );
                } else if (sodien >= 201 && sodien <= 300) {
                    bac4 = sodien * 2536;
                    printf("So tien dien phai tra la: %.2lf VND", bac4 );
                } else if (sodien >= 301 && sodien <= 400) {
                    bac5 = sodien * 2834;
                    printf("So tien dien phai tra la: %.2lf VND", bac5 );
                } else if (sodien > 400) {
                    bac6 = sodien * 2927;
                    printf("So tien dien phai tra la: %.2lf VND", bac6 );
                } 
                break;
            }
            case 0:
                printf("Ban da chon thoat chuong trinh. Tam biet!\n");
                exit(0);

            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
        }
    } while (luachon != 0);
    return 0;
    }