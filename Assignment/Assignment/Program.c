#include <stdio.h>

#include <math.h>

void kiemtraSoNguyen() {
    int so;
    printf("Nhap mot so nguyen: ");
    scanf_s("%d", &so);
    if (so % 1 == 0)
        printf("%d la so nguyen\n", so);
    else
        printf("%d khong phai la so nguyen\n", so);

}
int UCLN(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
void timuocChungVaBoiChung() {
    int a, b;
    printf("Nhap 2 so: ");
    scanf_s("%d%d", &a, &b);

    int ucln = UCLN(a, b);
    int bcnn = (a * b) / ucln;

    printf("Uoc chung lon nhat: %d\n", ucln);
    printf("Boi chung nho nhat: %d\n", bcnn);
}
void tinhTienKaraoke() {
    int start, end;
    printf("Nhap gio bat dau (0-23): ");
    scanf_s("%d", &start);
    printf("Nhap gio ket thuc (0-23): ");
    scanf_s("%d", &end);

    if (start < 0 || end > 23 || start >= end) {
        printf("Gio khong hop le!\n");
        return;
    }

    int gio = end - start;
    int tien = 30000;

    if (gio > 1) {
        tien += (gio - 1) * 7000;
    }

    printf("Tong tien karaoke = %d VND\n", tien);
}
void tinhTienDien() {
    int kwh;
    printf("Nhap so dien (kWh): ");
    scanf_s("%d", &kwh);

    int tien = 0;
    if (kwh <= 50) tien = kwh * 1700;
    else if (kwh <= 100) tien = 50 * 1700 + (kwh - 50) * 2000;
    else tien = 50 * 1700 + 50 * 2000 + (kwh - 100) * 2500;

    printf("Tien dien phai tra: %d VND\n", tien);
}
void doiTien() {
    int money;
    printf("Nhap so tien can doi: ");
    scanf_s("%d", &money);

    int menhGia[9] = { 500000,200000,100000,50000,20000,10000,5000,2000,1000 };

    for (int i = 0; i < 9; i++) {
        int soTo = money / menhGia[i];
        money %= menhGia[i];
        if (soTo > 0)
            printf("%d VND: %d to\n", menhGia[i], soTo);
    }
}
void laiSuatNganHang() {
    double tien, rate;
    int thang;
    printf("Nhap so tien gui: ");
    scanf_s("%lf", &tien);
    printf("Nhap so thang: ");
    scanf_s("%d", &thang);
    printf("Nhap lai suat %%/thang: ");
    scanf_s("%lf", &rate);

    double tong = tien;
    for (int i = 0; i < thang; i++) {
        tong += tong * rate / 100.0;
    }
    printf("Tong tien sau %d thang = %.2lf\n", thang, tong);
}
void vayTienMuaXe() {
    double tienVay, lai;
    int thang;

    printf("Nhap so tien vay: ");
    scanf_s("%lf", &tienVay);
    printf("Nhap so thang vay: ");
    scanf_s("%d", &thang);
    printf("Nhap lai suat %%/thang: ");
    scanf_s("%lf", &lai);

    double traHangThang = tienVay / thang + (tienVay * lai / 100.0);

    printf("Tien tra hang thang: %.2lf\n", traHangThang);
}
void sapXepThongTinSinhVien() {

    char name[5];      
    float score[5];    
    int i, j;

   
    for (i = 0; i < 5; i++) {
        printf("Nhap ten sinh vien %d (1 ky tu): ", i + 1);
        scanf_s(" %c", &name[i]);

        printf("Nhap diem: ");
        scanf_s("%f", &score[i]);
    }

   
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (score[i] < score[j]) {
                float tempScore = score[i];
                score[i] = score[j];
                score[j] = tempScore;

                char tempName = name[i];
                name[i] = name[j];
                name[j] = tempName;
            }
        }
    }

  
    printf("\n==== Danh sach sau khi sap xep giam dan ====\n");
    for (i = 0; i < 5; i++) {
        printf("Ten: %c\tDiem: %.2f\n", name[i], score[i]);
    }

    return 0;
}

void xaydungGame() {
    int secret = 7;
    int guess;

    printf("Doan so tu 1–10: ");
    scanf_s("%d", &guess);

    if (guess == secret) printf("Chinh xac!\n");
    else printf("Sai! So dung la %d\n", secret);
}
void tinhToanPhanSo() {
    int a, b, c, d;
    printf("Nhap phan so thu 1 (a b): ");
    scanf_s("%d %d", &a, &b);
    printf("Nhap phan so thu 2 (c d): ");
    scanf_s("%d %d", &c, &d);

    int tu = a * d + b * c;
    int mau = b * d;

    printf("Tong 2 phan so = %d/%d\n", tu, mau);
}



int main() {
    int luaChon;
    char tiepTuc;

    do {
        printf("\n===== MENU CHUC NANG =====\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim uoc chung va boi chung\n");
        printf("3. Tinh tien karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Doi tien\n");
        printf("6. Lai suat ngan hang\n");
        printf("7. Vay tien mua xe\n");
        printf("8. Sap xep thong tin sinh vien\n");
        printf("9. Xay dung game\n");
        printf("10. Tinh toan phan so\n");
        printf("11. Thoat\n");
        printf("Nhap lua chon (1–11): ");
        scanf_s("%d", &luaChon);

        switch (luaChon) {
        case 1: kiemtraSoNguyen(); break;
        case 2: timuocChungVaBoiChung(); break;
        case 3: tinhTienKaraoke(); break;
        case 4: tinhTienDien(); break;
        case 5: doiTien(); break;
        case 6: laiSuatNganHang(); break;
        case 7: vayTienMuaXe(); break;
        case 8: sapXepThongTinSinhVien(); break;
        case 9: xaydungGame(); break;
        case 10: tinhToanPhanSo(); break;
        case 11:
            printf("Thoat chuong trinh...\n");
            return 0;

        default:
            printf("Lua chon khong hop le!\n");
        }

        printf("Ban muon tiep tuc? (y/n): ");
        scanf_s(" %c", &tiepTuc);

    } while (tiepTuc == 'y' || tiepTuc == 'Y');

    return 0;
}