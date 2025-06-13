#include <iostream>
using namespace std;

void tambah(int m, int n); // Prototipe fungsi

int main() {
    int a, b;
    a = 5;
    b = 9;

    cout << "Nilai Sebelum Fungsi Digunakan\n";
    cout << "a = " << a << ", b = " << b << endl;

    tambah(a, b);

    cout << "\nNilai Setelah Fungsi Digunakan\n";
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}

void tambah(int m, int n) {
    m += 5;
    n += 7;

    cout << "\nNilai di dalam Fungsi Tambah()\n";
    cout << "m = " << m << ", n = " << n << endl;
}

