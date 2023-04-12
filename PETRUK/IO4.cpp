#include <fstream>
#include <iostream>
using namespace std;

int main() {
  fstream myfile;
  myfile.open("example.txt", ios::out | ios::in);
  myfile << "Contoh teks yang ditulis ke dalam file.\n";
  string line;
  myfile.seekg(0);
  while (getline(myfile, line)) {
    cout << line << '\n';
  }
  myfile.close();
  return 0;
}