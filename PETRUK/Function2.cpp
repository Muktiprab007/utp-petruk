#include <iostream>
using namespace std;

double LuasLingkaran(double r){
    double pi = 3.14;
    return pi*r*r;
}

int main(){
    double r;

    cin >> r;

    cout << LuasLingkaran();
}