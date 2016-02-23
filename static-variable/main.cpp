#include <iostream>
using namespace std;

int sum_no_static_variable(int n)
{
  int sum = 0;
  sum = sum + n;
  return sum;
}

int sum_static_variable(int n)
{
  static int sum = 0;  // Static variable persists across function calls!
  sum = sum + n;
  return sum;
}

int main()
{
  int arr[] = {1, 2, 3};

  for (int i=0; i<3; ++i) {
    cout << "without_static_variable = " << sum_no_static_variable(arr[i]) << endl;
    cout << "with_static_variable = " << sum_static_variable(arr[i]) << endl;

  }

  return 0;
}
