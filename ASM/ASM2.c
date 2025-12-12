#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//Chuc nang so 1: Kiem tra so nguyen
void nhapcheckSoNguyen (int x) {
    if (x == (int)x) {
        printf("%d la so nguyen\n", x);
    } else {
        printf("%d khong phai la so nguyen\n", x); }
}
void soNguyento (int x, int count) {
    for (int i = 2; i <= x / 2; i++) {
        if (x % i == 0) {
            count++; }
    }
    if (count == 0) {
        printf("%d la so nguyen to\n", x);} 
        else {
        printf("%d khong phai la so nguyen to\n", x); }
}
void soChinhPhuong (int x) {
    int i = sqrt(x);
    if (i * i == x) {
        printf("%d la so chinh phuong\n", x);
    } else {
        printf("%d khong phai la so chinh phuong\n", x); }
}
// Chuc nang so 2: Tim uoc so chung va boi so chung cua 2 so
int uocSoChungLonNhat (int a, int b) {
    while (a != b) {
        if (a > b) {
            a = a - b; }
        else {
            b = b - a; }
    }
    return a;
}
int boiSoChungNhoNhat (int a, int b) {
    return (a * b) / uocSoChungLonNhat(a, b);
}
// Chuc nang so 3: Chuong trinh tinh tien cho quan Karaoke
float tinhkaraoke(int a, int b)
{
    int sogiohat = b - a;
    float tongtien = 0;
    if (sogiohat <= 3)
    {
        tongtien = sogiohat * 150000;
    }
    else
    {
        tongtien = 3 * 150000 + ((sogiohat - 3) * 150000 * 0.7);
    }
    if (a > 14 && a < 17)
    {
        tongtien = tongtien * 0.9;
    }
    return tongtien;
}
// Chuc nang so 4: Tinh tien dien
void tiendien(int sodien) {
    float bac1, bac2, bac3, bac4, bac5, bac6;
    if ( sodien <= 50 ) {
        bac1 = sodien * 1.678;
        printf("So tien dien phai tra la: %.2f VND\n", bac1);
    } else if (sodien <= 100) {
        bac2 = sodien * 1.674 + 50 * 1.678;
        printf("So tien dien phai tra la: %.2f VND\n", bac2);
    } else if (sodien <= 200) {
        bac3 = 50 * 1.678 + ( sodien - 50 ) * 1.734 + ( sodien - 100 ) * 2.014;
        printf("So tien dien phai tra la: %.2f VND\n", bac3);
    } else if (sodien <= 300) {
        bac4 = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + ( sodien - 200 ) * 2.536;
        printf("So tien dien phai tra la: %.2f VND\n", bac4);
    } else if (sodien <= 400) {
        bac5 = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + ( sodien - 300 ) * 2.834;
        printf("So tien dien phai tra la: %.2f VND\n", bac5);
    } else {
        bac6 = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + 100 * 2.834 + ( sodien - 400 )
         * 2.927;
        printf("So tien dien phai tra la: %.2f VND\n", bac6);
    }
}
// Chuc nang so 5: Chuc nang doi tien
void doiTien(int soTienCanDoi) {
    int menhGia[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int soLuongMenhGia = 9;
    int soTienConLai = soTienCanDoi;
    int soToTien;
    int daDoiDuoc = 0; 
    printf("Số tiền cần đổi: %d\n", soTienCanDoi);
    printf("Kết quả đổi tiền: \n");
    for (int i = 0; i < soLuongMenhGia; i++) {
        int menhGiaHienTai = menhGia[i];
        if (soTienConLai == menhGiaHienTai) {
            if (i + 1 < soLuongMenhGia) {
                int menhGiaNhoHon = menhGia[i+1];
                soToTien = soTienConLai / menhGiaNhoHon;
                if (soToTien > 0) {
                    printf("- %d tờ mệnh giá %d\n", soToTien, menhGiaNhoHon);
                    soTienConLai = soTienConLai % menhGiaNhoHon;
                    daDoiDuoc = 1;
                }
                continue; 
            }
        }
        soToTien = soTienConLai / menhGiaHienTai;
        if (soToTien > 0) {
            printf("- %d tờ mệnh giá %d\n", soToTien, menhGiaHienTai);
            daDoiDuoc = 1;
            soTienConLai = soTienConLai % menhGiaHienTai;
            if (soTienConLai == 0) {
                break;
            }
        }
    }
    if (!daDoiDuoc) {
        printf("Không có mệnh giá nào được đổi.\n"); }
    if (soTienConLai > 0) {
        printf("Cảnh báo: Không thể đổi hết tiền. Còn dư %d\n", soTienConLai);
    }
}
// Chuc nang so 6: Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop
void tinhlaisuat(double a) {
    double gocphaitra = a / 12;
    double laiphaitra = 0;
    double sotienconlai = a;
    double sotienphaitra = 0;
    for (int i = 1; i <= 12; i++)
    {
        laiphaitra = sotienconlai * 0.05;
        sotienphaitra = gocphaitra + laiphaitra;
        sotienconlai -= gocphaitra;
        printf("\n%-10d %-15.0f %-15.0f %-15.0f %-15.0f", i, laiphaitra, gocphaitra, sotienphaitra, sotienconlai);
    }
}
// Chuc nang so 7: Xay dung chuong trinh vay tien mua xe
void vayMuaXe(int soptvay) {
    double tienvaymax = 500000;
    int nam = 24, thang = 24 * 12;
    double sotienlai;
    printf("So tien tra ban dau la %.3f", tienvaymax - (tienvaymax * soptvay / 100.0));
    double sotienconlai = tienvaymax - (tienvaymax - (tienvaymax * soptvay / 100.0));
    double sogocphaitra = sotienconlai / thang;
    double sotienphaitra;
    printf("\n%-5s %-20s %-20s %- 20s", "So tien con lai", "so tien lai", "So tien phai tra", "Thang");
    for (int i = 1; i <= thang; i++)
    {
        sotienlai = sotienconlai * 0.006;
        sotienphaitra = sogocphaitra + sotienlai;
        sotienconlai -= sogocphaitra;
        printf("\n%-20.0f %-20.0f %-17.0f %d", sotienconlai, sotienlai, sotienphaitra, i);
    }
    
}
// Chuc nang so 8: Sap xep thong tin sinh vien
struct SinhVien {
    char HoTen [50];
    float Diem;
} sv1;
void hocluc (float Diem) {
    if (Diem >= 9 && Diem <= 10) {
        printf("Hoc luc: Xuat sac\n");
    } else if (Diem >= 8 && Diem < 9) {
        printf("Hoc luc: Gioi\n");
    } else if (Diem >= 6.5 && Diem < 8) {
        printf("Hoc luc: Kha\n");
    } else if (Diem >= 5 && Diem < 6.5) {
        printf("Hoc luc: Trung binh\n");
    } else if (Diem >= 0 && Diem < 5) {
        printf("Hoc luc: Yeu\n");
    } else {
        printf("Diem khong hop le\n");
    }
}   
// Chuc nang so 9: Xây dựng game FPOLY-LOTT(2/15)
// Chuc nang so 10: Xay dung chuong trinh tinh toan phan so
int main () {
    int luachon;
    do {
        printf("________________________________________________________\n");
        printf("| WECOME TO NGO TAN LOC _ PS49690 _ ASSIGNMENT 2 |\n");
        printf("--------------------------MENU--------------------------\n"); 
        printf("1. Chuc nang so 1: Kiem tra so nguyen.\n");
        printf("2. Chuc nang so 2: Tim uoc so chung va boi so chung cua 2 so\n");
        printf("3. Chuc nang so 3: Chuong trinh tinh tien cho quan Karaoke\n");
        printf("4. Chuc nang so 4: Tinh tien dien\n");
        printf("5. Chuc nang so 5: Chuc nang doi tien\n");
        printf("6. Chuc nang so 6: Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop\n");
        printf("7. Chuc nang so 7: Xay dung chuong trinh vay tien mua xe\n");
        printf("8. Chuc nang so 8: Sap xep thong tin sinh vien\n");
        printf("9. Chuc nang so 9: Xay dung game FPOLY-LOTT(2/15)\n");
        printf("10. Chuc nang so 10: Xay dung chuong trinh tinh toan phan so\n");
        printf("0. Exit: Thoat khoi chuong trinh\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &luachon);
        switch (luachon) {
            case 1:
            int x;
                printf("1. Chuc nang kiem tra so nguyen");
                printf("\nNhap vao so nguyen: ");
                scanf("%d", &x);
                nhapcheckSoNguyen(x);
                soNguyento(x, 0);
                soChinhPhuong(x);
                printf("\n");
                break;
            case 2:
                printf("\nNhap vao 2 so nguyen: ");
                int a, b;
                scanf("%d %d", &a, &b);
                printf("Uoc so chung lon nhat cua %d va %d la: %d\n", a, b, uocSoChungLonNhat(a, b));
                printf("Boi so chung nho nhat cua %d va %d la: %d\n", a, b, boiSoChungNhoNhat(a, b));
                printf("\n");
                break;
            case 3:
            int giobatdau;
            int gioketthuc;
                printf("\nNhap vao gio bat dau: ");
                scanf("%d", &giobatdau);
                printf("Nhap vao gio ket thuc: ");
                scanf("%d", &gioketthuc);
                printf("So tien phai tra la: %.2f VND\n", tinhkaraoke( giobatdau, gioketthuc ));
                break;
            case 4:
                int sodien;
                printf("\nNhap vao so (kwh) dien su dung: ");
                scanf("%d", &sodien);
                tiendien( sodien );
                break;
            case 5: 
            int soTienCanDoi;
            printf("\nNhap so tien can doi: ");
            scanf("%d", &soTienCanDoi);
            doiTien(soTienCanDoi);
                break;

            case 6: 
            double sotien;
            printf("\nNhap so tien muon vay ");
            scanf("%lf", &sotien);
            tinhlaisuat(sotien);
                break;
            case 7: 
            printf("\n7. Vay tien mua xe");
            int soptvay;
            printf("\nNhap so phan tram vay: ");
            scanf("%d", &soptvay);
            vayMuaXe(soptvay);
                break;
            case 8:
                printf("\nNhap vao ho ten sinh vien: ");
                scanf("%s", sv1.HoTen);
                getchar();
                printf("\nNhap vao diem trung binh sinh vien: ");
                scanf("%f", &sv1.Diem);
                hocluc(sv1.Diem);
                printf("\n");
                break;
            case 9:
                printf("\n Nhap vao tu ban phim 2 so (tu 01 -15): ");
                break;
            case 10:
                break;
            case 0:
                printf("\n Nhap vao tu ban phim 2 phan so: ");
                break;
        default:
            printf("Lua chon khong hop le, vui long chon lai!\n");
            break;
        }
    } while ( luachon != 0);
    return 0;
}

