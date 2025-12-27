// currency converter test program

#include <iostream>

using namespace std;

int main() {
  
  double pesos, reais, soles, dollars;

  cout << "Enter number of Columbian Pesos:";
  cin >> pesos;

  cout << "Enter number of Brazilian Reais:";
  cin >> reais;

  cout << "Enter number of Peruvian Soles:";
  cin >> soles;
  
  /* CONVERSION RATES
  Pesos to USD: x 0.00027
  Reais to USD: x 0.18
  Soles to USD: x 0.30
  */

  dollars = (pesos * 0.0027) + (reais * 0.18) + (soles * 0.30);
  cout << "US Dollars = $" << dollars << endl;

}