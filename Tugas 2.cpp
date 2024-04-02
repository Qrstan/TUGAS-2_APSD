#include <iostream>

using namespace std;

int main() {
    // Langkah 1: Deklarasi variabel
    int bilangan1, bilangan2, hasil;

    // Langkah 3: Meminta masukan pengguna untuk bilangan pertama
    cout << "Masukkan bilangan pertama: ";
    cin >> bilangan1;

    // Langkah 4: Meminta masukan pengguna untuk bilangan kedua
    cout << "Masukkan bilangan kedua: ";
    cin >> bilangan2;

    // Langkah 5: Menghitung jumlah kedua bilangan
    hasil = bilangan1 + bilangan2;

    // Langkah 6: Menampilkan hasil penjumlahan ke layar
    cout << "Hasil penjumlahan: " << hasil << endl;

    // Langkah 7: Selesai program
    return 0;
}