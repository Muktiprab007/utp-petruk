#include <fstream>
using namespace std;

int main() {
  ofstream myfile;
  myfile.open("example.txt");
  myfile << "Contoh teks yang ditulis ke dalam file.\n";
  myfile.close();
  return 0;
}