# include <stdio.h>
# include <math.h>
# include <stdlib.h>
int main () {
     int luachon;
    do {
        printf("______________________________________________________\n");
        printf("| WELCOME TO Ngo Tan Loc _ PS49690_ Assignment |\n");
        printf("------------------------ Menu ------------------------\n");
        printf("1. Chuc nang so 1: Kiem tra so nguyen \n");
        printf("2. Chuc nang so 2: Tim uoc chung va boi chung cua 2 so \n");
        printf("3. Chuc nang so 3: Chuong trinh tinh tien cho quan Karaoke \n");
        printf("4. Chuc nang so 4: Tinh tien dien \n");
        printf("5. Chuc nang so 5: Chuc nang doi tien \n");
        printf("6. Chuc nang so 6: Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop \n");
        printf("7. Chuc nang so 7: Xay dung chuong trinh vay tien mua xe \n");
        printf("8. Chuc nang so 8: Sap xep thong tin sinh vien \n");
        printf("9. Chuc nang so 9: Xay dung game FPOLY-LOTT \n");
        printf("10. Chuc nang so 10: Xay dung chuong trinh tinh toan phan so \n");
        printf("0. Exit\n");
        printf(" Nhap lua chon cua ban: ");
        scanf("%d", &luachon);
        switch (luachon) {
            case 1:
                printf("\nNhap vao so min va max: ");
                int min, max, i = min;
                scanf("%d %d", &min, &max);
                float tong = 0;
                float bienDem = 0;
                float trungBinh = 0;
                while ( i <= max ) {
                    if ( i  % 2 == 0 ) {
                        tong += i;
                        bienDem++;
                    }
                    trungBinh = tong / bienDem;
                    printf("Tong cac so chia het cho 2 tu %d den %d la: %.2f\n", min, max, tong);
                    printf("Trung binh cong cac so chia het cho 2 tu %d den %d la: %.2f\n", min, max, trungBinh);
                    i++;
                    }
                break;
            case 2:
                printf("\nnhap vao 2 so nguyen: ");
                break;
            case 3: 
                printf("\nNhap gio bat dau va gio ket thuc: ");
                break;
            case 4: 
                printf("\nNhap vao so (kwh) dien tieu thu: ");
                break;
            case 5: 
                printf("\nNhap vao so tien can doi: ");
                break;
            case 6: 
                printf("\nNhap vao so tien can vay: ");
                break;
            case 7: 
                printf("\nNhap vao so phan tram vay toi da: ");
                break;
            case 8: 
                printf("\nNhap vao ho&ten va diem sinh vien: ");
                break;
            case 9: 
                printf("\nNhap vao tu ban phim 2 so (tu 01 - 15): ");
                break;
            case 10: 
                printf("\nNhap vao 2 phan so: ");
                break;
            case 0: {
                printf("Thoat chuong trinh...\n");
                exit(0);
            default:
                printf("Lua chon khong hop le! Moi nhap lai\n");
                break;
            } 
        }
    } while (luachon != 0);
    return 0;
}