#include <iostream>

int main() {
    int jamMain;
    float hargaAwal, totalBayar, diskon;

    std::cout << "Masukkan lama pemakaian (dalam jam): ";
    std::cin >> jamMain;

    hargaAwal = jamMain * 10000;

    if (jamMain > 4 && jamMain <= 6) {
        diskon = 0.10;
    }else if(jamMain > 6 && jamMain <= 8){
        diskon = 0.15;
    }

    totalBayar = hargaAwal - (hargaAwal * diskon);

    printf("\nLama pemakaian: %d jam\n", jamMain);
    printf("Total bayar (sebelum diskon): Rp %.2f\n", hargaAwal);
    printf("Diskon: %.0f%%\n", diskon * 100);
    printf("Total bayar (setelah diskon): Rp %.2f\n", totalBayar);

    return 0;
}
