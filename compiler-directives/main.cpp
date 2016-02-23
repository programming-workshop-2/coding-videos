#include <iostream>
using namespace std;

// we can also define via g++ -D option.

int main()
{
  cout << "This message should be always printed." << endl;

#ifdef MSG1
  cout << "This message is only printed when MSG1 is defined." << endl;
#endif

#ifdef MSG2OR3
  cout << "This message is only printed when MSG2OR3 is defined." << endl;  
#else
  cout << "This message is only printed when MSG2OR3 is *not* defined." << endl;  
#endif
  
  return 0;
}
