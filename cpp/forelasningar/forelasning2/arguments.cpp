#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
  
  cout << "Number of arguments: "<< argc << endl;
  cout << argv[0] << " is the name of this program" << endl;
  if ( argc > 1)
    {
      cout << argv[1] << endl;
    }
  else
    {
      cerr << "Wrong number of arguments" << endl;
      return 1;
    }
  // now its ok to use argv[1]
  
  return 0;
}
