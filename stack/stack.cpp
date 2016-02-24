#include "stack_impl.h"
#include "stack.h"

stack::stack()
{
  impl_ = new stack_impl;
}

stack::~stack()
{
  delete impl_;
}

void stack::push(int v)
{
  impl_->push(v);
}

int stack::pop()
{
  return impl_->pop();
}
