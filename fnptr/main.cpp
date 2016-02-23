#include <iostream>
using namespace std;

// we can use function pointer to separate the loop
// from the actual processing performed on the numbers

// create a function pointer as follows
typedef int (*cb)(int i);

// multiply each number by 2
int mult_by_2(int i)
{
  return i*2;
}

// multiply each number by 4
int mult_by_4(int i)
{
  return i*4;
}

void num_processor(int* a, int n, cb fn)
{
  // multiply each number by 4
  for (int i=0; i<n; ++i) a[i] = fn(a[i]);
}

void prn_arr(int* a, int n)
{
  for (int i=0; i<n; ++i) cout << a[i] << " ";
  cout << endl;
}

int main()
{
  int arr[] = {1, 2, 3, 4};

  num_processor(arr, 4, mult_by_4);
  prn_arr(arr, 4);
}
