#include <iostream>
using namespace std;

int main (){
    int baris, kolom;

    cin >> baris;
    cin >> kolom;

    int arr [baris][kolom];

    for (int i = 0; i < baris; i++){
        for (int j = 0; j < kolom; j++){
            int value;
            cout << "Masukkan baris ke-" << i+1 << "Masukkan kolom ke-" << j+1 << ": " << endl;
            cin >> value;
            
            arr[i][j] = value;
        }
    }
    for (int i = 0; i < baris; i++){
        for (int j = 0; j < kolom; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}