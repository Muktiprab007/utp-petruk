#include <iostream>
using namespace std;
//class with function
struct mahasiswa{
    public:
        string nama,npm;

        void perkenalan(){
            cout << nama << endl;
            cout << npm;
        }
};

int main (){
    mahasiswa Mhs;

    cin >> Mhs.nama;
    cin >> Mhs.npm;

    Mhs.perkenalan();
}