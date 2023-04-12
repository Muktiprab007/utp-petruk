#include <iostream>
using namespace std;

void hitungRerata(){
    int N;
    cin >> N;
    double penjumlahan_data = 0;
    
    for (int i = 0; i < N; i++){
        double data_pecahan;
        cin >> data_pecahan;

       
        penjumlahan_data += data_pecahan;
        
    }
    double Rerata = penjumlahan_data/N;
    
    cout <<Rerata;
}