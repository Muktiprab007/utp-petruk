#include <iostream>
using namespace std;

int fib(int n) {
if (n ==0 || n < 2) return n;
else
return fib (n-1) + fib (n-2);
}