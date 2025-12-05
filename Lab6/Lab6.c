#include <stdio.h>

int main() {
    
   /*//TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int mang[n];
    int i;
    for(i = 0; i < n; i++)
    {
        printf("Nhap mang[%d]: ", i);
        scanf("%d", &mang[i]);
    }
    float tong = 0;  
    float tb;         
    int count = 0;    
    for(i = 0; i < n; i++)
    {
        if(mang[i] % 3 == 0)
        {
            tong += mang[i];   
            count++;          
        }
    }
    if(count == 0)
    {
        printf("Khong co so nao chia het cho 3 trong mang.\n");
    } else 
    {
        tb = tong / count;
        printf("Trung binh cac so chia het cho 3 la: %.2f\n", tb);
    }*/

   /*//TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int mang[n];                
    for (int i = 0; i < n; i++) {
        printf("Nhap mang[%d]: ", i);
        scanf("%d", &mang[i]);
    }

    int max = mang[0];
    int min = mang[0];

    for (int i = 1; i < n; i++) {
        if (mang[i] > max) max = mang[i];
        if (mang[i] < min) min = mang[i];
    }

    printf("Gia tri lon nhat: %d\n", max);
    printf("Gia tri nho nhat: %d\n", min);
    */

    /*//SẮP XẾP MẢNG THEO THỨ TỪ GIẢM DẦN
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int mang[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap mang[%d]: ", i);
        scanf("%d", &mang[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (mang[i] < mang[j]) {
                int temp = mang[i];
                mang[i] = mang[j];
                mang[j] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep giam dan:\n");
    for (int i = 0; i < n; i++) {
        printf("mang[%d] = %d\n", i, mang[i]);
    }*/

    //TÍNH BÌNH PHƯƠNG CÁC PHẦN TỬ TRONG MẢNG 2 CHIỀU 
    int n, m;
    printf("Nhap so hang n: ");
    scanf("%d", &n);
    printf("Nhap so cot m: ");
    scanf("%d", &m);

    int mang[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Nhap mang[%d][%d]: ", i, j);
            scanf("%d", &mang[i][j]);
        }
    }

    printf("\nMang sau khi binh phuong tung phan tu:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", mang[i][j] * mang[i][j]);
        }
        printf("\n");
    }

    return 0;
}
