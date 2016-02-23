#include <iostream>
#include "Sum.h"
using namespace std;

int main()
{
  int arr[] = {1, 2, 3};

  Sum summer;
  for (int i=0; i<3; ++i) {
    summer.add( arr[i] );
  }
  cout << "Sum is " << summer.get() << endl;

  return 0;
}
