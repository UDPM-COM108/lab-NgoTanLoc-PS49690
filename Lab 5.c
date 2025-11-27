#include <stdio.h>

int main() {

 // xay dung chuong trinh tim do lon nhat trong 3 so
    int a, b, c;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    printf("Nhap so thu ba: ");
    scanf("%d", &c);

    int max = a; 
    if (b > max) {
        max = b; 
    }
    if (c > max) {
        max = c; 
    }
    printf("So lon nhat trong 3 so la: %d\n", max);
   
    // xây dung chuonng trình hàm tính năm nhuận

    int isLeapYear(int year) {
        return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    }
    int year;
    printf("Nhap nam can kiem tra: ");
    scanf("%d", &year);
    if (isLeapYear(year)) {
        printf("%d la nam nhuan.\n", year);
    } else {
        printf("%d khong phai la nam nhuan.\n", year);
    }    
        
    // xây dựng hàm hoán vị
    void swap(int *a, int *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    int x,y;
    printf("Nhap gia tri cho x: ");
    scanf("%d", &x);
    printf("Nhap gia tri cho y: ");
    scanf("%d", &y);
    printf("\nTruoc khi hoan vi: x=%d, y=%d\n", x, y);
    swap(&x, &y);
    printf("\nSau khi hoan vi: x= %d, y=%d\n", x, y);

 return 0;  
}
