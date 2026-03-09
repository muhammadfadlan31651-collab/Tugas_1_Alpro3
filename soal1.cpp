// Soal ini dijawab menggunakan bahasa C, tapi tidak apa-apa jika menggunakan extension CPP

/* 
Buat program yang meminta pengguna memasukkan sebuah kata (terdiri dari minimal 10 karakter), 
lalu tampilkan karakter per karakter menggunakan putchar().
*/
#include <stdio.h>
#include <string.h>

int main() {
    char kata[100];  // menampung kata yang dimasukkan user

    // minta input dari user
    printf("Masukkan sebuah kata (minimal 10 karakter): ");
    scanf("%99s", kata);  // baca kata, dibatasi maksimal 99 karakter

    // cek panjang kata
    if (strlen(kata) < 10) {
        printf("Kata harus minimal 10 karakter!\n");
        return 1; // keluar jika syarat tidak terpenuhi
    }

    // tampilkan karakter satu per satu
    printf("Karakter per karakter:\n");
    for (int i = 0; kata[i] != '\0'; i++) {
        putchar(kata[i]);   // cetak karakter
        putchar('\n');      // pindah baris setelah karakter
    }

    return 0; // selesai
}
