#include "Sum.h"

Sum::Sum()
  : value(0) // Notice the use of initializer list
{}

void Sum::add(int n)
{
  value += n;
}

int Sum::get()
{
  return value;
}
