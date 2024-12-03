#include <stdio.h>
#define ngay 31
void nhapTienChiTieuNgay(float A[], int n);
void xuatChiTieuNgay(float A[], int n);

int main()
{
	int n;
	float A[ngay];
	do
	{
		printf("So ngay chi tieu trong thang:(28<=n<=31):"); scanf("%d", &n);
	}
	while (n<28||n>31);
	nhapTienChiTieuNgay (A,n);
	printf("\n");
	xuatChiTieuNgay(A,n);
	printf("\n");
	printf("Tong so chi tieu tien trong thang: %d.2f\n",tongChiTieu(A,n));
	return 0;
}
void nhapTienChiTieuNgay(float A[], int n)
{
	for(int i=0; i<n; i++)
	{
		printf ("Ngay %d:", i+1); scanf("%f",&A[i]);
	}
}
void xuatChiTieuNgay(float A[], int n)
{
	printf("Chieu tieu tung ngay la:"); 
	for(int i=0; i<n; i++)
	{
		printf("Ngay %d: %.2f dongf\n", i+1, A[i]);
	}
}

