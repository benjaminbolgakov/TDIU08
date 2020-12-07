#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> const & arr)
{
  for (int i=0; i < arr.size(); i++)
    {
      cout << arr.at(i) << ' ';
    }
  for (int i : arr)
    {
      cout << i << endl;
    }
}

void add_five(vector<int> & arr)
{
  for (int & i : arr)
    {
      i += 5;
    }
}

int main()
{
  //Array of integers
  int arr [10]{3,3,3,3,3,3,3,3,3,3};
  //Indexing
  arr[0] = 5;
  cout << arr[2] << endl;

  //Vector
  vector<int> arr2{1,3,5};
  //Load 10 2's into vector
  vector<int> arr3(10,2);
  //Add element to vector
  arr2.push_back(0);
  
  cout << arr2.at(0) << endl;
  for (int i=0; i < arr2.size(); i++)
    {
      cout << arr2.at(i) << ' ';
    }

  print(arr2);
  
  add_five(arr2);
  print(arr2);

  //Remove last element
  arr2.pop_back();

  //Comparing vectors
  if (arr2 < arr3)
    {
      
    }
  //Clearing vectors
  if(!arr2.empty())
    {
      arr2.clear();
    }
  //Resizing
  arr2.resize(20);

  //Iterators
  
  //insert a 7 at the beginning
  arr2.insert(begin(arr2),7);
  //insert a 10 at the end
  arr2.insert(end(arr2), 10);

  
  return 0;
}
