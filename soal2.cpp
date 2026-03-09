// Soal ini dijawab menggunakan bahasa C, tapi tidak apa-apa jika menggunakan extension CPP
#include <stdio.h> // soal ini dikerjakan Meisrik wahyuni 
#include <conio.h> // library khusus untuk getche dan getch

int main(){ // deklrasi variabel
    char nama[30],makanan[50], film[50], karakter;

    printf("masukkan nama anda  : ");
    gets(nama); // agar jika user memasukkan nama memakai spasi,program membaca nya sampai habis 

    printf("masukkan makanan kesukaanmu :) : ");
    gets(makanan);

    printf("film kesukaan mu : ");
    gets(film);

    printf("masukkan satu karakter, terserah dirimu : ");
    karakter = getchar(); // fungsi ini mengambil satu karakter tapi  memerlukan tombol enter untuk mengirimkan karakter tersebut kedalam program 
    printf("\n karakter dari getchar adalah : %c\n ", karakter );

    printf("masukkan satu karakter, terserah dirimu : ");
    karakter = getche(); // karakter yang diketik akan langsung muncul dilayar dan langsung di proses tanpa perlu menekan enter 
    printf("\n karakter dari getche adalah : %c\n ", karakter );

    printf("masukkan satu karakter, terserah dirimu : ");
    karakter = getch(); // fungsi ini mengambil karakter diam diam atau di sembunyikan, karakter yang diketik tidak akan muncul dilayar, dangat berguna untuk membuat password
    printf("\n karakter dari getch yang tersembunyi tadi adalah : %c\n ", karakter );

    printf("Nama kamu adalah %s\n makanan kesukaan mu adalah %s\n kamu menyukai film %s\n  ", nama, makanan,film );
}
/*
Buat program yang membaca satu karakter menggunakan getchar(), getche(), dan getch(). 
Tampilkan karakter yang dimasukkan setelah setiap input.
*/
