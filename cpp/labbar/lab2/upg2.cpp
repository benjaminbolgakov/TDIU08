#include <string>
#include <iostream>

using namespace std;

int main()
{
  string s;
  char c;
  int words = 1;
  
  cout << "Enter text: " << endl;
  while (cin.get(c))
  {
    if (c == ' ')
    {
      words++;
    }
    s.push_back(c);
  }

  cout << "Number of words: " << words << endl;
  
  cout << s;

  
  
  return 0;
}
