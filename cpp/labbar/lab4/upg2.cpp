#include <string>
#include <sstream>
#include <fstream>
#include <iostream>

using namespace std;

void process(string const input);

int main()
{

  string s;
  ifstream ins{"data.txt"};
  
  while(getline(ins,s))
  {
    process(s);
  }
  
  
  return 0;
}

void process(string const input)
{
  cout << input << endl;
  stringstream sst;
  sst << input;
  
}

