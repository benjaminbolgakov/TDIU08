#include <string>
#include <iostream>
#include <vector>
#include <istream>
#include <sstream>
#include <iomanip>
#include <cctype>

using namespace std;

struct Person
{
  string forename,surname;
};
void print(const vector<Person> input); 

int main()
{
  Person a;
  string fname,sname,input;
  int temp;
  vector<Person> p{a};

  cout << "Fill in people: " << endl;

  while(getline(cin,input))
  {
    a.forename = input;
    a.surname = input;
    p.push_back(a);
  }

  cout << "NAME: " << endl;
  cout << a.forename;
  
//  print(p);
  
  return 0;
}

void print(const vector<Person> input)
{
  //cout << "You entered: " << input[0].name << "," << input[0].age << "," << input[0].size << endl;
}
