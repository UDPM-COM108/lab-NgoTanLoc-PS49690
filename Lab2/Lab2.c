#include <stdio.h> 
#include <math.h>
int main(){
  // Bai 1:xay dung chung trinh tinh tong va hieu 2 so nguyen
    int soA, soB, tong, hieu;
    printf("Nhap 2 so nguyen: ");
    scanf("%d %d", &soA, &soB);
    tong = soA + soB;
    hieu = soA - soB;
    printf(" Tong cua 2 so la: %d\n", tong);
    printf(" Hieu cua 2 so la: %d\n", hieu);

  // Bai 2: xay dung chuong trinh tinh dien chu vi va dien tich hinh chu nhat
    float chieudai, chieurong, dientich, chuvi;
    printf("\nNhap chieu dai va chieu rong hinh chu nhat: ");
    scanf("%f %f", &chieudai, &chieurong);
    dientich = chieudai * chieurong;
    chuvi = 2 * (chieudai + chieurong);
    printf(" Chu vi hinh chu nhat la: %.2f\n", chuvi);
    printf(" Dien tich hinh chu nhat la: %.2f\n", dientich);
  // Bai 3: xay dung chuong trinh tinh chu vi va dien tich hinh tron
    float bankinh, dientichhinhtron, chuvihinhtron;
    const float pi = 3.14;
    printf("\nNhap ban kinh hinh tron: ");
    scanf("%f", &bankinh);
    dientichhinhtron = pi * bankinh * bankinh;
    chuvihinhtron = 2 * pi * bankinh;
    printf(" Chu vi hinh tron la: %.2f\n", chuvihinhtron);
    printf(" Dien tich hinh tron la: %.2f\n", dientichhinhtron);

  // Bai 4:xay dung chuong trinh tinh diem trung binh 3 mon hoc
    float diemToan, diemLy, diemHoa, diemTrungBinh;
    printf("\nNhap diem Toan, Ly, Hoa: ");
    scanf("%f %f %f", &diemToan, &diemLy, &diemHoa);
    diemTrungBinh = (diemToan + diemLy + diemHoa) / 3;
    printf(" Diem trung binh 3 mon la: %.2f\n", diemTrungBinh);

  // Bai 5:xay dung chuong trinh tinh chu vi va dien tich hinh tam giac 
    float canhA, canhB, canhC, dientichtamgiac, chuvitamgiac;
    printf("\nNhap do dai 3 canh tam giac: ");
    scanf("%f %f %f", &canhA, &canhB, &canhC);
    chuvitamgiac = canhA + canhB + canhC;
    float p = chuvitamgiac / 2;
    dientichtamgiac = sqrt(p * (p - canhA) * (p - canhB) * (p - canhC));
    printf(" Chu vi hinh tam giac la: %.2f\n", chuvitamgiac);
    printf(" Dien tich hinh tam giac la: %.2f\n", dientichtamgiac);

    return 0;
}