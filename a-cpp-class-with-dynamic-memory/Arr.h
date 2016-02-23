#ifndef __Arr_h__
#define __Arr_h__

#include <iostream>
using namespace std;

class Arr
{
private:
  int* mem;  // a pointer to point to the dynamic array
  int sz;    // size of the dynamic array

public:

  // the default constructor
  Arr();

  // constructor to setup an array of a size `sz`
  Arr(int sz);

  // destructor to de allocate the memory to avoid memory leak
  ~Arr();

  // copy constructor
  Arr(const Arr& arr);
  
  // a function to return the size of this array
  const int& get_size() const { return sz; }

  // overload [] operator to access individual elements
  int& operator[](int i) { return mem[i]; }
  const int& operator[](int i) const { return mem[i]; }

  // resize the array
  // 1. if copy is true, try to preserve the current contents
  // 2. if copy is false, the current contents *may be* discarded
  // we make it an option since, preserving the current contents
  // is slow.
  // 3. the default value for copy is true
  void resize(int sz, bool copy=true);

  // assignment operator
  const Arr& operator=(const Arr& arr);

  // add a static method to construct an Arr
  static Arr gen_sequence(int start, int step, int num);
  
  // a friend method to print out the array
  friend ostream& operator<<(ostream& os, const Arr& arr);  
};

#endif
