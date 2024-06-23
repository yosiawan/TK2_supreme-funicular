#include <iostream>
#include <vector>

struct NilaiSiswa {
    int quiz = 0;
    int tugas = 0;
    int absensi = 0;
    int praktek = 0;
    int uas = 0;
    int average = 0;
};

int penilai() {
    int numOfStudent;
    std::cout << "Masukkan jumlah siswa yang ingin di-input: ";
    std::cin >> numOfStudent;

    std::vector<NilaiSiswa> kumpulanNilaiSiswa(numOfStudent);

    for (int index = 0; index < numOfStudent; index++) {
        printf("\n Masukkan nilai siswa %d", index + 1);

        std::cout << "\n Nilai Quiz: ";
        std::cin >> kumpulanNilaiSiswa[index].quiz;

        std::cout << "\n Nilai Tugas: ";
        std::cin >> kumpulanNilaiSiswa[index].tugas;

        std::cout <<  "\n Nilai Absensi: ";
        std::cin >> kumpulanNilaiSiswa[index].absensi;

        std::cout << "\n Nilai praktek: ";
        std::cin >> kumpulanNilaiSiswa[index].praktek;

        std::cout << "\n Nilai UAS: ";
        std::cin >> kumpulanNilaiSiswa[index].uas;
    }

    for (int idx = 0; idx < kumpulanNilaiSiswa.size(); ++idx) {
        auto [quiz, tugas, absensi, praktek, uas, average] = kumpulanNilaiSiswa[idx];

        average =  (quiz + tugas + absensi + praktek + uas ) / 5;
        bool isStudentPassed = false; // Isi value LULUS/TIDAK LULUS disini
        printf("\n Nilai Rerata siswa %d: %d %s", idx + 1, average, isStudentPassed ? "LULUS" : "TIDAK LULUS");
    }

    return 0;
}

int kalkulator() {

    //inisialisasi variabel
    int jamMain;
    float hargaAwal, totalBayar, diskon;

    //user input lama pemakaian dalam satuan jam
    printf("Masukkan lama pemakaian (dalam jam):");
    scanf("%d", &jamMain);

    //perhitungan harga jika per jam nya 10000
    hargaAwal = jamMain * 10000;

    //perkondisian untuk menentukan diskon yang didapat
    if (jamMain > 10) {
        diskon = 0.25;
    }else if(jamMain > 8 ){
        diskon = 0.20;
    } else if(jamMain > 6 ){
        diskon = 0.15;
    } else if(jamMain > 4){
        diskon = 0.10;
    } else {
        diskon = 0.00;
    };

    //perhitungan biaya yang harus dibayar
    totalBayar = hargaAwal - (hargaAwal * diskon);

    //output result yang dikeluarkan
    printf("\nLama pemakaian: %d jam\n", jamMain);
    printf("Total bayar (sebelum diskon): Rp %.2f\n", hargaAwal);
    printf("Diskon: %.0f%%\n", diskon * 100);
    printf("Total bayar (setelah diskon): Rp %.2f\n", totalBayar);

    return 0;
}

int main() {

    int soal;
    std::cout << "Masukkan Soal yang ingin dijalankan (1 / 2): ";
    std::cin >> soal;

    if (soal == 1) {
        return kalkulator();
    }

    if (soal == 2) {
        return penilai();
    }

    std::cout << "Hanya bisa pilih 1 atau 2 ";
    return 1;
}