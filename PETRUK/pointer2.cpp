#include <iostream>
using namespace std;

int main (){
    ///int *ip
    //double *dp
    //float *fp
    //char *ch

    int num = 10;
    double dbl = 3.14;
    float flt = 2.5f;

    int *ip = &num;
    double *dp = &dbl;
    float *fp = &flt;

    cout << "value int : " << *ip << ", address: " << ip;
    cout << "value int : " << *dp << ", address: " << dp;
    cout << "value int : " << *fp << ", address: " << fp;
}