#include <iostream>
#include <fstream>
using namespace std;

int main (){
    string teks[4];

    for (int i = 0; i < 4; i++){
        cin >> teks[i];
    }

    ofstream writeFile("Barang.txt");

    for (int i; i < 4; i++){
        writeFile << teks[i] << "\n";
    }
}