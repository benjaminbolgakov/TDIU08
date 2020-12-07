#include <iostream>
#include <string>
#include "book.h"
using namespace std;

int main()
{
  BookType b;
  BookType b2{"Fellowship of the ring", "J.R.R", 500};

  b.title = "Something";
  b.author = "Benni";
  b.pages = 22;

  BookType b4{b2};
  
  print(b2);

  vector<BookType> book_vec;
  book_vec.push_back(b1);

  using Book_Vector_Type = vector<BookType>;
  Book_Vector_Type book_vec2;

  
  
  
  return 0;
}

