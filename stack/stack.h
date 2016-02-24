#ifndef __stack_h__
#define __stack_h__

class stack_impl;
class stack
{
  public:
  stack();
  ~stack();
  
  void push(int v);
  int pop();

  private:
  stack_impl* impl_; // pointer to the implementation
};

#endif
