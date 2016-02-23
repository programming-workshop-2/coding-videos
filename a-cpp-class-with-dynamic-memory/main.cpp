#include <iostream>
#include "Arr.h"
using namespace std;

int main()
{
  cout << "Example of an empty array." << endl;
  Arr a1;
  cout << a1 << endl;

  cout << endl << "Example of an array of size 3." << endl;
  Arr a2(3);
  cout << a2 << endl;

  cout << endl << "Example of an array of size 3 (with some numbers)." << endl;
  Arr a3(3);
  a3[0] = 23;
  a3[1] = 12;
  a3[2] = 34;
  cout << a3 << endl;

  cout << endl << "Example of an array resize with copy." << endl;
  a3.resize(5);
  cout << a3 << endl;

  cout << endl << "Example of an array resize with copy." << endl;
  a3.resize(7, true);
  cout << a3 << endl;

  cout << endl << "Example of an array resize without copy." << endl;
  a3.resize(3, false);
  cout << a3 << endl;

  cout << endl << "Example of using a copy constructor." << endl;
  Arr a4(3);
  a4[0] = 30;
  a4[1] = 14;
  a4[2] = 22;
  cout << a4 << endl;
  Arr a5(a4);
  cout << a5 << endl;

  cout << endl << "Example of doing assignments." << endl;
  Arr a6(7);
  cout << a6 << endl;
  a6 = a4;
  cout << a6 << endl;

  cout << endl << "Example of using a static method." << endl;
  Arr a7 = Arr::gen_sequence(10, 3, 5);
  cout << a7 << endl;
  
  return 0;
}
