#include <iostream>
#include <random>

using namespace std;

int main()
{

  random_device rnd;
  cout << "Ett slumpat tal: " << rnd() << endl;
  cout << "Ett slumpat tal mellan 1-6: " << (rnd() % 6+1) << endl;

  uniform_int_distribution<int> interval{1, 6};
  cout << "Slumpat tal: " << interval(rnd) << endl;
  
  return 0;
}
