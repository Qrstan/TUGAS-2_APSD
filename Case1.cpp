#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menghitung nilai rata-rata dari tiga nilai tugas
float hitungRataRata(float tugas1, float tugas2, float tugas3) {
    return (tugas1 + tugas2 + tugas3) / 3.0;
}

int main() {
    string nim, nama;
    float nilaiTugas1, nilaiTugas2, nilaiTugas3;

    cout << "=== Program Menghitung Nilai Rata-rata Siswa ===" << endl;
    cout << "Masukkan NIM Siswa: ";
    cin >> nim;
    cout << "Masukkan Nama Siswa: ";
    cin.ignore();
    getline(cin, nama);
    cout << "Masukkan Nilai Tugas 1: ";
    cin >> nilaiTugas1;
    cout << "Masukkan Nilai Tugas 2: ";
    cin >> nilaiTugas2;
    cout << "Masukkan Nilai Tugas 3: ";
    cin >> nilaiTugas3;

    // Hitung nilai rata-rata
    float rataRata = hitungRataRata(nilaiTugas1, nilaiTugas2, nilaiTugas3);

    // Tampilkan hasil
    cout << "\n=== Hasil ===" << endl;
    cout << "NIM Siswa: " << nim << endl;
    cout << "Nama Siswa: " << nama << endl;
    cout << "Nilai Rata-rata: " << rataRata << endl;

    return 0;
}