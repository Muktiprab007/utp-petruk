#include <iostream>
using namespace std;

void tukar (int& a, int& b, int& c){
    if (a > b){
        swap (a,b);
    }if (b > c){
        swap(b,c);
    }if (a > b){
        swap (a,b);
    }
}
int main() {
    int a, b, c;
    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;
    cout << "Masukkan nilai c: ";
    cin >> c;
    tukar(a, b, c);
    cout << "Setelah ditukar: a = " << a << ", b = " << b << ", c = " << c << endl;
    return 0;
}