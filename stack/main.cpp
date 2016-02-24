#include <iostream>
using namespace std;

#include "stack.h"

int main()
{
  stack s;

  cout << "Add 1" << endl; s.push(1);
  cout << "Add 2" << endl; s.push(2);
  cout << "Add 3" << endl; s.push(3);

  cout << s.pop() << endl;
  cout << s.pop() << endl;
  cout << s.pop() << endl;
  
  return 0;
}
