#include <iostream>
using namespace std;

int main (){
    int baris, kolom;

    cin >> baris;
    cin >> kolom;

    int arr[baris][kolom];

    for (int i = 0; i < baris; i++){
        for (int j = 0; j < kolom; j++){
            int value;
            cout << "Baris ke- " << i+1 << "Kolom ke- " << j+1 << ": "<< endl;
            cin >> value;
            arr[i][j] = value;
        }
    }

    cout << "Array yang diisi:\n";
    for (int i = 0; i < baris; i++){
        for (int j = 0 ; j < kolom; j++){
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }
}