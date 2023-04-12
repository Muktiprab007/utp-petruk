#include <iostream>
using namespace std;

// Function untuk menampilkan pesan sapaan
void sapaan() {
    cout << "Halo! Selamat datang di program ini." << endl;
}

// Function untuk menghitung luas segitiga
double luasSegitiga(double alas, double tinggi) {
    double luas = 0.5 * alas * tinggi;
    return luas;
}

int main() {
    // Memanggil function sapaan
    sapaan();
    
    // Memanggil function luasSegitiga
    double alas, tinggi;
    cout << "Masukkan alas segitiga: ";
    cin >> alas;
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;
    double luas = luasSegitiga(alas, tinggi);
    cout << "Luas segitiga adalah: " << luas << endl;
    
    return 0;
}