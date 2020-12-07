#include <iostream>
#include <string>

using namespace std;

int main()
{
  string name;
  int age;
  cout << "Enter name ";
  getline(cin, name);
  cin.ignore(2, '\n'); //Clear buffer for 2 character or
                       //until a space is detected
  
  cout << name << endl;

  cout << "Welcome, " << name << "!" << endl;
  cout << "Enter your age: " << endl;
  getline(cin, age);
  cout << "Is your age: " << age << " ?" << endl;
  string s;
  while (cin >> s) //Read from buffer until CTRL-D
    {
      cout << s.at(0);
    }

  for (string s; getline(cin, s) ; )
    {
      cout << "The input had: " << s.size() << "letters" << endl;
    }
  
  return 0;
}
