#include <iostream>
#include "vec2.h"
using namespace std;

int main()
{
  vec2 v1(1,2);
  cout << "v1 = " << v1 << endl;

  vec2 v2 = v1;
  cout << "v2 = " << v2 << endl;

  vec2 v3(v2);
  v3 *= 20;
  cout << "v3 = " << v3 << endl;

  vec2 v4 = (v3 *= 20);
  cout << "v3 = " << v3 << endl;
  cout << "v4 = " << v4 << endl;

  cout << "v2 * v2 = " << v2 * v2 << endl;
  
  cout << "v2 * 2 = " << v2 * 2 << endl;
  cout << "2 * v2 = " << 2 * v2 << endl;

  cout << "v1 + v2 = " << v1 + v2 << endl;
  cout << "v1 + v2 - v3 = " << v1 + v2 - v3 << endl;
  cout << "-v1 = " << -v1 << endl;
  cout << "- v1 = " << - v1 << endl;

  return 0;
}
