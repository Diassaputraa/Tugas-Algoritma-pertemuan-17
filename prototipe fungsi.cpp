#include <iostream>
#include <string.h>
using namespace std; // Tambahkan ini agar cout dan cin dikenali

// Prototipe fungsi
void coment(char ket[30], int n);

int main() {
    char lagi, c[30];
    int i;

atas:
    cout << "Masukkan nilai = "; 
    cin >> i;
    coment(c, i); // Panggil fungsi
    cout << "\n\nIngin input lagi [Y/T]: "; 
    cin >> lagi;

    if (lagi == 'Y' || lagi == 'y')
        goto atas;
    else
        return 0;
}

// Blok program fungsi dengan parameter aktual
void coment(char ket[30], int n) {
    int a;
    a = n % 2;
    if (a == 1)
        strcpy(ket, "---Bilangan Ganjil---");
    else
        strcpy(ket, "---Bilangan Genap---");

    cout << ket; // Tampilkan hasil
}

