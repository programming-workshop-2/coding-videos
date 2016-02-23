#include "Arr.h"

Arr::Arr()
  : sz(0), mem(0)
{}

Arr::Arr(int _sz)
  : sz(_sz)
{
  mem = new int[sz];
}

Arr::~Arr()
{
  if (mem) {
    delete[] mem; // fixed memory leak
  }
}

ostream& operator<<(ostream& os, const Arr& arr)
{
  os << "[ ";
  for (int i=0; i<arr.sz-1; ++i) {
    cout << arr[i] << ",";
  }
  if (arr.sz > 1) {
    cout << arr[arr.sz-1] << " ";
  }
  os << "]";

  return os;
}

void Arr::resize(int _sz, bool copy)
{
  // nothing to be done, if new size is equal to the current size
  if (sz == _sz) return;

  int* tmp = new int[_sz];
  if (copy) {
    int n = (sz < _sz) ? sz : _sz;
    for (int i=0; i<n; ++i) {
      tmp[i] = mem[i];
    }
  }
  delete[] mem; // don't forget to delete the old array!
  mem = tmp;
  sz = _sz;
}

Arr::Arr(const Arr& arr)
{
  sz = arr.sz;
  mem = new int[sz];

  for (int i=0; i<sz; ++i)
  {
    mem[i] = arr[i];
  }
}

const Arr& Arr::operator=(const Arr& arr)
{
  sz = arr.sz;
  resize(sz, false);
  
  for (int i=0; i<sz; ++i) mem[i] = arr[i];

  return *this;
}

Arr Arr::gen_sequence(int start, int step, int num)
{
  Arr arr(num);

  int i = 0;
  while (i < num)
  {
    arr[i] = start + step * i;
    ++i;
  }

  return arr;
}
