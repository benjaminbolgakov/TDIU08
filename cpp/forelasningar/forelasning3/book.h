#include <iostream>
#include <string>
using namespace std;

struct BookType
{
  string title;
  string author;
  int pages;
};

bool operator<(BookType const & left, BookType const & right)
{
  if(left.title < right.title)
    {
      return true;
    }
  else
    {
      return false;
    }
}

void print(BookType const book)
{
  cout << book.title << endl;
  cout << book.author << endl;
  cout << book.pages << endl;
}
