#include <iostream>
using namespace std;

// Deklarasi fungsi
void tambah(int *c, int *d);

int main() {
    int a, b;
    a = 4;
    b = 6;

    cout << "Nilai Sebelum Pemanggilan Fungsi" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // Pemanggilan fungsi dengan alamat (call by reference menggunakan pointer)
    tambah(&a, &b);

    cout << "\nNilai Setelah Pemanggilan Fungsi" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}

// Definisi fungsi
void tambah(int *c, int *d) {
    *c += 7;
    *d += 5;

    cout << "\nNilai di Akhir Fungsi Tambah()" << endl;
    cout << "c = " << *c << ", d = " << *d << endl;
}

