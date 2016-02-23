#include <iostream>
#include "ll.h" // our linked list header file
using namespace std;

int main()
{
  llist l;  //llist implements a linked list
            //that has an add and a remove method
            //add() appends an integer to the end
            //of the list and remove() deletes
            //an integer from the end of the list.

  l.add(1); cout << "Added: " << 1 << endl;
  l.add(2); cout << "Added: " << 2 << endl;
  l.add(3); cout << "Added: " << 2 << endl;
  
  l.prn();
  
  cout << "Removed: " << l.remove() << endl;
  cout << "Removed: " << l.remove() << endl;

  l.prn();
  
  return 0;
}
