#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ifstream myfile;
  myfile.open("example.txt");
  string line;
  while (getline(myfile, line)) {
    cout << line << '\n';
  }
  myfile.close();
  return 0;
}