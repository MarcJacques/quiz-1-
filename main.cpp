#include <iostream>
using namespace std;

int main() 
{
  // int x = 5, y = 30;

  // do
  // {
  //   x = x * 2;
  // }
  //   while (x < y);
  // cout << x << endl;


  int x = 7;
  bool found = false;

  do
  {
    cout << x << " ";
    if (x <= 2)
        found = true;
    else
        x = x - 5;
  }
    while (x > 0 && !found);
  cout << endl;
  return 0;

}