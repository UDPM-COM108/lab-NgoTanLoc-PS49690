#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int luachon;
    do {
        printf("\n\n++================================++\n");
        printf("|        CHUC NANG CHINH           |\n");
        printf("++================================++\n");
        printf("| Chuc nang 1: Tinh trung binh tong|\n");
        printf("| Chuc nang 2: Tim so nguyen to    |\n");
        printf("| Chuc nang 3: Tim so chinh phuong |\n");
        printf("| Chuc nang 4: Thoat               |\n");
        printf("++================================++\n");
        printf("Xin moi chon chuc nang (1, 2, 3, 4): ");
        scanf("%d", &luachon);
    
        switch (luachon) {
            case 1:
                printf("\n--- CHUC NANG 1: TINH TRUNG BINH TONG ---\n"); 
                int min, max;
                int i=min;
                float tong = 0, bienDem = 0, trungBinh = 0;

                printf("Nhap min: ");
                scanf("%d", &min);

                printf("Nhap max: ");
                scanf("%d", &max);

                while (i <= max) {
                    if (i % 2 == 0) {    
                        tong += i;
                        bienDem++;
                    }
                    i++;
                }

                if (bienDem > 0) {
                    trungBinh = tong / bienDem;
                    printf("Trung binh cac so chia het cho 2 tu %d den %d la: %.2f\n", min, max, trungBinh);
                } else {
                    printf("Khong co so nao chia het cho 2 trong khoang nay.\n");
                }
                break;
            case 2:
                printf("\n--- CHUC NANG 2: KIEM TRA SO NGUYEN TO ---\n");
                int x;
                int count = 0;
                printf("Nhap so nguyen duong x: ");
                if (scanf("%d", &x) != 1 || x < 0) {
                    printf("Loi nhap du lieu. Vui long nhap mot so nguyen duong.\n");
                
                }

                if (x <= 1) {
                    printf("%d KHONG phai la so nguyen to.\n", x);
                }
                for (int i = 2; i * i <= x; i++) { 
                    if (x % i == 0) {
                     count++;
                     break; 
                    }
                }
    
                if (count == 0) {
                    printf("%d LA so nguyen to.\n", x);
                } else {
                    printf("%d KHONG phai la so nguyen to.\n", x);
                }
        
                break;
            case 3:
                printf("\n--- CHUC NANG 3: KIEM TRA SO CHINH PHUONG ---\n");
                int x;
                bool is_chinh_phuong = false; 
                
                printf("Nhap so nguyen duong x: ");
                if (scanf("%d", &x) != 1 || x < 0) {
                    printf("Loi nhap du lieu. Vui long nhap mot so nguyen khong am.\n");
                }

                if (x == 0) {
                    is_chinh_phuong = true;
                } else {
                    // Hướng dẫn: Chay vong lap bien dem i = 1, dieu kien lap i*i <= x
                    // Su dung long long i de tranh tran so (overflow) khi i*i
                    for (long long i = 1; i * i <= x; i++) {
                        if (i * i == x) {
                            is_chinh_phuong = true;
                            break;
                        }
                    }
                }
                
                if (is_chinh_phuong) {
                    printf("%d LA so chinh phuong.\n", x);
                } else {
                    printf("%d KHONG phai la so chinh phuong.\n", x);
                }
                break;
            case 4:
                printf("\n>>> Thoat khoi chuong trinh. Tam biet! <<<\n");
                break;
            default:
                printf("\n*** LUA CHON KHONG HOP LE. Vui long chon chuc nang tu 1 den 4. ***\n");
                break;
        }

    } while (luachon != 4); 
    return 0;
}