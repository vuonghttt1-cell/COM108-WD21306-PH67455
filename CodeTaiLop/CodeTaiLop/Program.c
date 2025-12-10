#include <stdio.h>
void thongTinMonHoc() {
	char tenMonHoc1[50], tenMonHoc2[50], tenMonHoc3[50];
	int soTinChi1, soTinChi2, soTinChi3;
	printf("Nhap ten mon hoc 1:");
	scanf_s("%s", tenMonHoc1, sizeof(tenMonHoc1));
	printf("Nhap so tin chi mon hoc 1:");
	scanf_s("%d", &soTinChi1);

	printf("Nhap ten mon hoc 2:");
	scanf_s("%s", tenMonHoc2, sizeof(tenMonHoc2));
	printf("Nhap so tin chi mon hoc 2:");
	scanf_s("%d", &soTinChi2);

	printf("Nhap ten mon hoc 3:");
	scanf_s("%s", tenMonHoc3, sizeof(tenMonHoc3));
	printf("Nhap so tin chi mon hoc 3:");
	scanf_s("%d", &soTinChi3);

	printf("Thong tin mon hoc:\n");
	printf("Mon hoc 1: %s, So tin chi: %d\n", tenMonHoc1, soTinChi1);
	printf("Mon hoc 2: %s, So tin chi: %d\n", tenMonHoc2, soTinChi2);
	printf("Mon hoc 3: %s, so tin chi: %d\n", tenMonHoc3, soTinChi3);

}
void tinhTongSoLe() {

	int n, tong = 0;

	printf("Nhap n: ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0) {
			tong += i;
		}

	}
	if (n % 2 == 0) {
		printf("n la so chan\n");
	}
	else {
		printf("n la so le\n");
	}

	printf("Tong cac so le tu 1 den %d la: %d\n", n, tong);



}

void thongTinDiemLab() {

}
int main() {
	int luaChon;
	char tiepTuc;

	do {
		printf("1.Thong tin mon hoc\n");
		printf("2.Tinh tong so le\n");
		printf("3.Thong tin diem lab\n");
		printf("4.Thoat\n");
		printf("Nhap lua chon cua ban (1-4):");
		scanf_s("%d", &luaChon);
		switch (luaChon) {
		case 1: thongTinMonHoc();
			break;
		case 2: tinhTongSoLe();
			break;
		case 3: thongTinDiemLab();
			break;
		case 4: printf("Thoat chuong trinh\n");
			return 0;
		default: printf("Lua chon khong hop le. Vui long chon lai.\n");

		}
		printf("Ban co muon tiep tuc khong? (y/n): ");
		scanf_s(" %c", &tiepTuc, 1);

	} while (tiepTuc == 'y' || tiepTuc == 'Y');
	return 0;
}
