#ifndef __llist_h__
#define __llist_h__

class llist; 
class lnode {
  public:
  virtual ~lnode();

  protected:
  lnode* n_; // next node
  lnode* p_; // previous node
  int v_; // value

  friend class llist;
};


class llist {
  private:

  lnode* f_; // first node of the list
  lnode* l_; // last node of the list, we need to efficiently append and
             // remove values at the end of the list.
  public:
  llist();
  ~llist(); 
  
  void add(int v);
  int remove();
  void prn(); // may be wise to have a print function
              // to help us debug the list.
};

#endif
