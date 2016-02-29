#ifndef __Person_h__
#define __Person_h__

#include <iostream>
#include <string>
using namespace std;

class Person
{
  private:
  int sin_num_; // this is only accessible to methods of this class

  protected:
  int age_; // this is accessible to methods of this class and
            // the methods of inherited classes

  public:
  string name_; // this is accessible to all methods

  Person(const string& name, int age, int sin_num)
  {
    name_ = name;
    age_ = age;
    sin_num_ = sin_num;
  }

  virtual ~Person() {}
  
  int get_age() { return age_; }
  
  int get_sin_num() { return sin_num_; }
  
  virtual void prn_info()
  {
    cout << "Name: " << name_ << endl;
    cout << "Age: " << age_ << endl;
    cout << "SIN number: " << sin_num_ << endl;
  }
};

#endif
