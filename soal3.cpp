// Soal ini dijawab menggunakan bahasa CPP

/*
    Buatlah program yang menerima input satu bilangan bulat (detik) 
    dan menampilkan output dalam format: X detik = H jam M menit S detik
*/

#include <iostream> // header iostream untuk i/o standar
using namespace std; // pakai namespace std biar gak ribet tulis std: setiap kali
int main() { // fungsi utama program
    int totalDetik, jam, menit, detik;     // Deklarasi variabel:
    cin >> totalDetik; // baca input bilangan bulat dari user dan disimpan di totaldetik
    jam = totalDetik / 3600; // Hitung jam: 1 jam sama dengan 3600 detik, pake pembagian bulat
    menit = (totalDetik % 3600) / 60; // Hitung menit: ambil sisa detik setelah dijam terus bagi 60, pake modulo buat sisa pembagian
    detik = totalDetik % 60; // Hitung detik akhir: ambil sisa pembagian totalDetik sama 60 buat dapetin detik yang belum cukup jadi menit
    // Tampilin hasilnya 
    cout << totalDetik << " detik = " << jam << " jam " << menit << " menit " << detik << " detik" << endl;
    return 0;
}

