#include <iostream>
#include "ll.h"

using namespace std;

lnode::~lnode()
{
#ifdef DEBUG
  cout << "DEBUG: Deleting node with value " << v_ << endl;
#endif
}

llist::llist() : f_(0), l_(0)
{}

llist::~llist()
{
  lnode* c = f_;
  while (c) {
    lnode* o = c; // save the current node, we will delete it shortly
    c = c->n_; // get the next node before deleting the current node
    delete o; // chug it
  }
}

void llist::add(int v)
{
  if (!f_) { // this is the very beginning of this list
    f_ = new lnode;

    f_->v_ = v;
    f_->n_ = 0;
    f_->p_ = 0;

    l_ = f_; // end of the list is also the beginning of the list

    return; // an early return is a great idea sometimes
  }

  // this is not the very beginning of the list
  lnode* n = new lnode;

  n->v_ = v; // value of the new node
  n->n_ = 0; // the next of new node is 0
  n->p_ = l_; // the prev of new node is the current last node

  l_->n_ = n; // the next of current last node is the new node
  l_ = n; // the new last node is the new node
}

int llist::remove()
{
  int v = l_->v_; // we assume that remove will not
                  // invoked on an empty list

  lnode* p = l_->p_; // find the prev node of current last node
  delete l_; // delete the last node
  l_ = p; // update the last node to reflect the new end of this list

  if (!l_) { // special case, if l_ itself is null, it means we have exhausted
             // the linked list.
    f_ = 0;
  }
  else {
    l_->n_ = 0; // set the next of current last node to 0
  }
  
  return v;
}

void llist::prn()
{
  lnode* c = f_;
  int i=0;
  while (c) {
    cout << "Item " << i << " is " << c->v_ << endl;
    c = c->n_; ++i;
  }

  if (i == 0) {
    cout << "The list is empty." << endl;
  }
}
