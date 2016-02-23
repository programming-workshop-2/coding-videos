#ifndef __Sum_h__  // Notice how we place class declaration within
#define __Sum_h__  // #ifdef blocks, so as to avoid multiple
                   // copies if sum.h is included multiple times in a cpp file
class Sum
{
private:
  int value;

public:
  Sum(); // Constructor

  void add(int n);
  int get();
};

#endif
