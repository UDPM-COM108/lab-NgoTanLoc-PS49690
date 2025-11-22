#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int luachon;

    // Vong lap do-while de dam bao menu duoc hien thi it nhat mot lan
    do {
        // Hien thi Menu
        printf("\n\n++================================++\n");
        printf("|        CHUC NANG CHINH           |\n");
        printf("++================================++\n");
        printf("| Chuc nang 1: Tinh trung binh tong|\n");
        printf("| Chuc nang 2: Tim so nguyen to    |\n");
        printf("| Chuc nang 3: Tim so chinh phuong |\n");
        printf("| Chuc nang 4: Thoat               |\n");
        printf("++================================++\n");
        printf("Xin moi chon chuc nang (1, 2, 3, 4): ");
        
        // Doc lua chon tu nguoi dung
        if (scanf("%d", &luachon) != 1) {
            printf("\nLoi nhap lieu. Vui long nhap mot so tu 1 den 4.\n");
            // Xoa bo dem ban phim de tranh loop vo han khi nhap ky tu khong phai so
            while (getchar() != '\n'); 
            luachon = 0; // Gan gia tri khac 1,2,3,4 de tiep tuc vong lap
            continue; // Quay lai dau vong lap do-while
        }

        // Thuc thi chuc nang tuong ung
        switch (luachon) {
            case 1:
                printf("\n--- CHUC NANG 1: TINH TRUNG BINH TONG ---\n");
                chucNangTinhTrungBinhTong(); 
                break;
            case 2:
                printf("\n--- CHUC NANG 2: KIEM TRA SO NGUYEN TO ---\n");
                chucNangKiemTraSoNguyenTo();
                break;
            case 3:
                printf("\n--- CHUC NANG 3: KIEM TRA SO CHINH PHUONG ---\n");
                chucNangKiemTraSoChinhPhuong();
                break;
            case 4:
                printf("\n>>> Thoat khoi chuong trinh. Tam biet! <<<\n");
                break;
            default:
                // Hien thi menu nhu cu (vi da nam trong vong lap do-while)
                printf("\n*** LUA CHON KHONG HOP LE. Vui long chon chuc nang tu 1 den 4. ***\n");
                break;
        }

    } while (luachon != 4); // Dieu kien de tiep tuc lap

    return 0;
}

// =======================================================
// DINH NGHIA CAC HAM CHUC NANG
// =======================================================

// Ham gia lap cho Bai 1: Tinh trung binh tong (Do de bai khong co chi tiet bai 1)
void chucNangTinhTrungBinhTong() {
    // Vi khong co noi dung chi tiet, chi in ra thong bao
    printf("Day la noi dung cua Bai 1 (Tinh trung binh tong).\n");
    printf("Vui long them code cua Bai 1 vao day.\n");
}

// Ham cho Bai 2: Tim so nguyen to
void chucNangKiemTraSoNguyenTo() {
    int x;
    int count = 0;
    printf("Nhap so nguyen duong x: ");
    if (scanf("%d", &x) != 1 || x < 0) {
        printf("Loi nhap du lieu. Vui long nhap mot so nguyen duong.\n");
        return;
    }

    if (x <= 1) {
        printf("%d KHONG phai la so nguyen to.\n", x);
        return;
    }

    // Su dung toi uu: Chi kiem tra den can bac hai cua x
    // i*i <= x tuong duong i <= sqrt(x)
    for (int i = 2; i * i <= x; i++) { 
        if (x % i == 0) {
            count++;
            break; // Tim thay uoc so, dung ngay lap tuc
        }
    }
    
    if (count == 0) {
        printf("%d LA so nguyen to.\n", x);
    } else {
        printf("%d KHONG phai la so nguyen to.\n", x);
    }
}

// Ham cho Bai 3: Tim so chinh phuong
void chucNangKiemTraSoChinhPhuong() {
    int x;
    bool is_chinh_phuong = false; 
    
    printf("Nhap so nguyen duong x: ");
    if (scanf("%d", &x) != 1 || x < 0) {
        printf("Loi nhap du lieu. Vui long nhap mot so nguyen khong am.\n");
        return;
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
}


int main() {
    // TÍNH TRUNG BÌNH TỔNG CỦA CÁC SỐ TỰ NHIÊN CHIA HẾT CHO 2
    int min, max;
    int i=min;
    float tong = 0, bienDem = 0, trungBinh = 0;

    printf("Nhap min: ");
    scanf("%d", &min);

    printf("Nhap max: ");
    scanf("%d", &max);

    while (i <= max) {
        if (i % 2 == 0) {     // kiểm tra chia hết cho 2
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
    //XÂY DỰNG CHƯƠNG TRÌNH XÁC ĐỊNH SỐ NGUYÊN TỐ
    int n, j, demSoUoc;

    return 0;
}
