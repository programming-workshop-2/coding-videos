#ifndef __Student_h__
#define __Student_h__

#include "Person.h"

class Student : public Person
{
  protected:
  int year_;

  public:
  Student(const string& name, int age, int sin_num)
    : Person(name, age, sin_num)
  {
    year_ = 1;
  }

  virtual ~Student() {}
  
  void prn_info()
  {
    Person::prn_info();
    cout << "Year: " << year_ << endl;
  }
};

#endif
