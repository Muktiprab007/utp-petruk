#include <iostream>
using namespace std;
#define max (x,y) (x>y? x:y)

int main(){
    int A,B;
    cout << "WRITE TWO INTEGERS: ";
    cin >> A >> B;
    cout << "Maximum of the two = " << max (A,B) << endl;
    return 0;
}