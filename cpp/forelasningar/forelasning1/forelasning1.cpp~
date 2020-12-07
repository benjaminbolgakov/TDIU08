#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
  cout << "Mata in forsta pris ";
  double fp, lp, s;
  //Reading from keyboard
  cin >> fp;
  //Print to output
  cout << fp << endl;

  while (fp < 0.0 || fp > 100.0)
  {
    cout << "ERROR: Mata in forsta pris igen ";
    cin >> fp;
  }

  do
    {
      cout << "Mata in sista pris: "; 
      cin >> lp;
    }
  while (lp < fp);

  cout << "Mata in steglangd: ";
  while (true)
    {
      cin >> s;
      if (s > 0.0)
	{
	  break;
	}
      cout >> "ERROR: Mata in steglangd igen: ";
    }
  
  double m{25.0};
  int n = floor((lp-fp) / s + 1.0);

  cout << "MOMSTABELL (mini)" << endl;

  for (int i=0; i<n+1; i++)
    {
      cout << setw(8) << setprecision(2) << fixed << fp + (i*s);
      cout << endl;
    }

  
  
  return 0;
}
