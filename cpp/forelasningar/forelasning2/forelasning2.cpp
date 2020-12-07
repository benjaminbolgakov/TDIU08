#include <iostream>

using namespace std;

int max(int const a, int const b);

void swap(int & a, int & b)
{
  int c{a};
  a = b;
  b = c;
}

void print_in_reverse(string const & item)
{
  for (int i = item.size()-1; i >= 0; i--)
    {
      cout << item.at(i);
    }
  cout << endl;
}

void print_stars(int const amount = 5) // set default value 5
{
  for (int i = amount; i > 0; i--)
    {
      cout.put('*');
    }
  cout << endl;
}

string operator+(string const & name, int const age)
{
  return name + to_string(age);
}

int main()
{
  int a{3};
  int b{7};
  int m{ max(a,b)};
  cout << "Largest number is: " << m << endl;

  swap(a,b);
  cout << "a is: " << a << ", b is: " << b << endl;

  string word{"Tjenixen"};
  print_in_reverse(word);

  print_stars(10);
  print_stars();

  string person{"Ben", 32};
  
  return 0;
}


int max(int const a, int const b)
{
  if (a > b)
    {
      return a;
    }
  return b;
}
