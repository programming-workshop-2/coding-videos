#include <iostream>
using namespace std;

// argc - stores the number of command line arguments
// argv - an array of char*, stores the arguments themselves.  argv[0] is always the name of the program.
int main(int argc, char** argv)
{
  cout << "argc = " << argc << endl;

  for (int i=0; i<argc; ++i) cout << argv[i] << endl;

  return 0;
}
