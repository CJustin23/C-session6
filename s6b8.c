#include <stdio.h>
#include <math.h>

int main() {
    double tien_goc, lai_suat_thang, so_thang, tien_lai, tien_nhan_duoc;
	printf("Nhap so tien ban dau: ");
    scanf("%lf", &tien_goc);
	printf("Nhap lai suat thang (%%): ");
    scanf("%lf", &lai_suat_thang);
	printf("Nhap so thang gui: ");
    scanf("%lf", &so_thang);
	lai_suat_thang /= 100;
	tien_nhan_duoc = tien_goc * pow(1 + lai_suat_thang, so_thang);
    tien_lai = tien_nhan_duoc - tien_goc;
	printf("Tien lai: %.3lf\n", tien_lai);
    printf("Tien nhan duoc: %.3lf\n", tien_nhan_duoc);
	return 0;
}

