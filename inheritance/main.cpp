#include "Person.h"
#include "Student.h"

int main()
{                                                                  
  Person p("John Doe", 1, 111222333);
  p.prn_info();

  Student s("Jane Doe", 17, 222333444);
  s.prn_info();

  Person* p1 = new Student("Joe Fast", 23, 444555666);
  // Student* s1 = new Person("Joe Fast", 23, 444555666); - not allowed
  p1->prn_info();
  delete p1;
  
  return 0;
}
