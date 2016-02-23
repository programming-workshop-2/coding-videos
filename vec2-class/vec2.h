#ifndef __vec2_h__
#define __vec2_h__

#include <iostream>

class vec2
{
private:
  double m[2];

public:
  vec2(); // default constructor
  vec2(const vec2& v); // copy constructor
  vec2(const double& x, const double& y); // another constructor

  const vec2& operator=(const vec2& v); // assignment operator

  // element accessors and setters 
  inline double& operator[](const int& i) { return m[i]; }
  inline const double& operator[](const int& i) const { return m[i]; }

  const vec2& operator*=(const double& s); // multiply self with a scalar

  friend double operator*(const vec2& a, const vec2& b); // dot product of two vectors
  
  friend vec2 operator*(const vec2& v, const double& s); // right mult a vector with a scalar
  friend vec2 operator*(const double& s, const vec2& v); // left mult a vector with a scalar  

  friend vec2 operator+(const vec2& a, const vec2& b); // add two vectors
  friend vec2 operator-(const vec2& a, const vec2& b); // subtract vector b from a

  vec2 operator-(); // negative of a vector
  
  friend std::ostream& operator<<(std::ostream& os, const vec2& v);
};

#endif
