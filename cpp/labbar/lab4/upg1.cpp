#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

void print_1(ifstream &ins);
void print_2(ifstream & ins);

int main()
{
  ifstream ins{"WORDS.TXT"};
  print_1(ins);
  ins.close();
  return 0;
}

void print_2(ifstream & ins)
{
  int count{0};
  char c;
  while(ins >> c)
  {
    cout << c << endl;
    if(c == '\n'){
      cout << count << endl;
      count = 0;
      ins.ignore();
    }
    count++;
  }
}


void print_1(ifstream &ins)
{
  int count{0};
  char c;
  while(ins.get(c))
  {
    if(c == '\n'){
      cout << count << endl;
      count = 0;
      ins.ignore();
    }
    count++;
  }
}


