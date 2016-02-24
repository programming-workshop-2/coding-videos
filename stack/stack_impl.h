#ifndef __stack_impl_h__
#define __stack_impl_h__

class llist;
class stack_impl
{
  private:
  llist* c_; // container is linked list from ll.h

  public:
  stack_impl();
  ~stack_impl();
  
  void push(int v);
  int pop();
  
};

#endif
