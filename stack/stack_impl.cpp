#include "stack_impl.h"
#include "ll.h"

stack_impl::stack_impl()
{
  c_ = new llist;
}

stack_impl::~stack_impl()
{
  delete c_;
}

void stack_impl::push(int v)
{
  c_->add(v);
}

int stack_impl::pop()
{
  return c_->remove();
}
