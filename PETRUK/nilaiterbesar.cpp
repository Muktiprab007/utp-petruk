#include <iostream>
using namespace std;

void findMax(){
    int N;
    
    int nilai_terbesar;
    
    cin >> N;
    
    cin >> nilai_terbesar;
    
    for (int i = 2; i <= N; i++){
        int data;
        cin >> data;
        if (data > nilai_terbesar){
            nilai_terbesar = data;
        }
    }
    cout << nilai_terbesar;
}
int main() {
    findMax();
    return 0;
}

