#include <stdio.h>
#include <string.h>

int main() {   
    //BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI 
    char s[100];
    int n = 0, p = 0;
    printf("Nhap chuoi: ");
    gets(s);

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                n++;
            } else {
                p++;
            }
        }
    }

    printf("Chuoi '%s' co %d nguyen am va %d phu am\n", s, n, p);        

    //BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD 
    char userSys[] = "admin";
    int passSys = 12345;
    char user[100];
    int pass;

    printf("Nhap username: ");
    gets(user);
    printf("Nhap password: ");
    scanf("%d", &pass);

    if (strcmp(user, userSys) == 0 && pass == passSys) {
        printf("Dang nhap thanh cong!\n");
    } else {
        printf("Dang nhap that bai!\n");
    }
           

     
    //BÀI 3:  XÂY DỰNG CHƯƠNG TRÌNH SẮP XẾP CHUỖI THEO CHỮ CÁI 
    char x[5][20], temp[20];
    int i, j;

    printf("Nhap 5 chuoi:\n");
    for (i = 0; i < 5; i++) {
        printf("Chuoi %d: ", i + 1);
        gets(x[i]);
    }
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strcmp(x[i], x[j]) > 0) {
                strcpy(temp, x[i]);
                strcpy(x[i], x[j]);
                strcpy(x[j], temp);
            }
        }
    }

    printf("\nCac chuoi sau khi sap xep:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", x[i]);
    }
         
    return 0;
}
