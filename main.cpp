#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double pi;
  double raza;
  double h;
  float volum;

  //pi = 3.1416; da raspuns corect si aici

  cout << "Introduceti raza cilindrului: ";
  cin >> raza;

  cout << "Introduceti inaltimea cilindrului: ";
  cin >> h;

  pi = 3.1416;

  volum = pi * raza * raza * h;

  cout << "Volumul este: " << volum << endl;

  return 0;

}
