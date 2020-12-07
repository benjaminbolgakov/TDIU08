#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

void printTable();
void printData(int const start, int const end);

int main()
{
  int iTemp, eTemp;
  
  cout << "Enter starting value: ";
  cin >> iTemp;

  cout << "Enter end value: ";
  cin >> eTemp;

  printTable();
  printData(iTemp, eTemp);
  
  return 0;
}

void printData(int const start, int const end)
{
  double kelvin,farenheit,reaumur;
  for (int i = start; i <= end; i++)
  {
    kelvin = i + 273.15;
    farenheit = (i *1.8)+32;
    reaumur = i * 0.8;
    cout << fixed << setprecision(1) << setw(7) << i;
    cout << fixed << setprecision(2) << setw(12) << kelvin;
    cout << fixed << setprecision(2) << setw(12) << farenheit;
    cout << fixed << setprecision(2) << setw(12) << reaumur << endl;
  }
}

void printTable()
{
  cout << "Celcius      Kelvin   Farenheit     Reaumur" << endl;
  cout << "-------------------------------------------" << endl;
}
