#include <iostream>
using namespace std;
int main()
{
  char c;
  //  cin.get(c);

  int count{};
  //Keep reading input until user press CTRL+D
  while (cin.get(c))
    {
      if (c == ' ')
	{
	  count++;
	}
      cout << c;
    }
  cout << "Number of spaces " << count << endl;
}
