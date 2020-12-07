#include <string>
#include <iostream>
#include <random>
using namespace std;

int taps = 10;

int rndLength()
{
  random_device rnd;
  uniform_int_distribution<int> dist(1,15);
  return dist(rnd);
}

void genRows(vector<int> &rows, int &max)
{
  int input;
  int last = 0;
  for(int i{0}; i < taps; i++)
  {
    input = rndLength();
    rows.push_back(input);
    cout << "Input: " << input << endl;
    if(input > last)
    {
      last = input;
      max = input;
    }
  }
}

int main()
{
  cout << "----------------------------------" << endl;
  bool tapEnd{false};
  int max;
  vector<int> rows;
  genRows(rows,max);

  for(int k{0}; k < rows.size(); k++)
  {
    cout << rows[k] << " ";
  }
  cout << endl;
  for(int i{0}; i < max; i++)
  {
    for(int j{0}; j < taps; j++)
    {
      if(rows[j] > i)
      {
	cout << "| ";
      }
      else if(rows[j] == i)
      {
	cout << "V ";
      }
      else
      {
	cout << "  ";
      }
    }
    cout << endl;
  }
  
  //cout << genLength() << endl;
  return 0;
}
