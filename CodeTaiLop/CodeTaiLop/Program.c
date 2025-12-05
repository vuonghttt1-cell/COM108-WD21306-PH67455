<<<<<<< HEAD
// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>

int main()
{
    printf("Hi there!\n");
}


// GV: AnhTT184
=======


#include <stdio.h>
int main() {
	/*int main()
	{
		int chonChucNang;

		{
			printf("Menu:\n");
			printf("1. Kiem tra so nguyen\n");
			printf("2. Tim so chan le\n");
			printf("3. Thoat\n");
			printf("Chon chuc nang (1-3): ");
			scanf_s("%d", &chonChucNang);
			switch (chonChucNang)
			{
			case 1:
			{

				int so;
				printf("Nhap mot so nguyen: ");
				scanf_s("%d", &so);
				if (so % 1 == 0)
					printf("%d la so nguyen\n", so);
				else
					printf("%d khong phai la so nguyen\n", so);
				break;

			}
			case 2:
			{
				int n;
				printf("Nhap mot so: ");
				scanf_s("%d", &n);

				if (n % 2 == 0)
					printf("%d la so chan\n", n);
				else
					printf("%d la so le\n", n);

				return 0;
			}






			}
		}
		}*/

		/*int main() {
			char name[50];

			printf("Nhap ho ten: ");
			fgets(name, sizeof(name), stdin);  // nh?p c? kho?ng tr?ng

			printf("Ho ten cua ban: %s", name);

			return 0;
		}*/

		/*int main() {
			char ten[50];
			printf("nhap vap ten cua ban:");
			puts(ten);
			gets(ten);
			printf(" ten cua ban la %s", ten);
			return 0;


		}*/
	void demMang2Chieu(); {
		int array[2][3];
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 3; j++) {
				printf("Nhap cac phan tu trong mang array[%d][%d]: ", i, j);
				scanf_s("%d", &array[i][j]);
				

			}

		}
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 3; j++) {
				printf("%d,", array[i][j]);

			}
			printf("\n");
		}


	}
}



		
>>>>>>> update code
