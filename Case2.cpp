#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menghitung nilai akhir dari nilai keaktifan, tugas, dan ujian
float hitungNilaiAkhir(float nilaiKeaktifan, float nilaiTugas, float nilaiUjian) {
    float nilaiMurniKeaktifan = nilaiKeaktifan * 0.2;
    float nilaiMurniTugas = nilaiTugas * 0.5;
    float nilaiMurniUjian = nilaiUjian * 0.3;
    
    return nilaiMurniKeaktifan + nilaiMurniTugas + nilaiMurniUjian;
}

int main() {
    string namaSiswa;
    float nilaiKeaktifan, nilaiTugas, nilaiUjian;

    cout << "=== Program Menghitung Nilai Akhir Siswa ===" << endl;
    cout << "Masukkan Nama Siswa: ";
    getline(cin, namaSiswa);
    cout << "Masukkan Nilai Keaktifan: ";
    cin >> nilaiKeaktifan;
    cout << "Masukkan Nilai Tugas: ";
    cin >> nilaiTugas;
    cout << "Masukkan Nilai Ujian: ";
    cin >> nilaiUjian;

    // Hitung nilai akhir
    float nilaiAkhir = hitungNilaiAkhir(nilaiKeaktifan, nilaiTugas, nilaiUjian);

    // Tampilkan hasil
    cout << "\n=== Hasil ===" << endl;
    cout << "Siswa yang bernama " << namaSiswa << endl;
    cout << "Dengan Nilai Persentasi Yang dihasilkan." << endl;
    cout << "Nilai Keaktifan * 20% : " << nilaiKeaktifan * 0.2 << endl;
    cout << "Nilai Tugas * 50% : " << nilaiTugas * 0.5 << endl;
    cout << "Nilai Ujian * 30% : " << nilaiUjian * 0.3 << endl;
    cout << "Jadi Siswa yang bernama " << namaSiswa << " memperoleh nilai akhir sebesar " << nilaiAkhir << endl;

    return 0;
}
