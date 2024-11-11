
#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel untuk biodata
    string nama, alamat, jurusan;
    int umur;

    // Input data dari pengguna
    cout << "Masukkan Nama: ";
    getline(cin, nama);  // Menggunakan getline untuk input string dengan spasi
    cout << "Masukkan Umur: ";
    cin >> umur;
    cin.ignore();  // Mengabaikan newline setelah input angka
    cout << "Masukkan Alamat: ";
    getline(cin, alamat);
    cout << "Masukkan Jurusan: ";
    getline(cin, jurusan);

    // Menampilkan biodata
    cout << "\n=== Biodata Lengkap ===\n";
    cout << "Nama: " << nama << endl;
    cout << "Umur: " << umur << " tahun" << endl;
    cout << "Alamat: " << alamat << endl;
    cout << "Jurusan: " << jurusan << endl;

    return 0;
}
