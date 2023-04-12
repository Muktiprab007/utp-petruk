#include <iostream>
using namespace std;

int main() {
  int rows, cols;
  cout << "Masukkan jumlah baris: ";
  cin >> rows;
  cout << "Masukkan jumlah kolom: ";
  cin >> cols;

  // Inisialisasi array dengan ukuran yang diminta
  int myArray[rows][cols];

  // Loop untuk meminta pengguna memasukkan nilai ke dalam array
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      int value;
      cout << "Masukkan nilai untuk baris ke-" << i+1 << ", kolom ke-" << j+1 << ": ";
      cin >> value;
      myArray[i][j] = value;
    }
  }

  // Cetak array yang telah diisi
  cout << "Array yang diisi:\n";
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << myArray[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}