#include "vec2.h"

using namespace std;

vec2::vec2()
{}

vec2::vec2(const vec2& v)
{
  m[0] = v[0];
  m[1] = v[1];
}

vec2::vec2(const double& x, const double& y)
{
  m[0] = x;
  m[1] = y;
}

const vec2& vec2::operator=(const vec2& v)
{
  m[0] = v[0];
  m[1] = v[1];
  return *this;
}

const vec2& vec2::operator*=(const double& s)
{
  m[0] *= s;
  m[1] *= s;
  return *this;
}

ostream& operator<<(ostream& os, const vec2& v)
{
  os << v[0] << " " << v[1];

  return os;
}

double operator*(const vec2& a, const vec2& b)
{
  return a[0]*b[0] + a[1]*b[1];
}

vec2 operator*(const vec2& v, const double& s)
{
  vec2 a(v);
  a *= s;
  return a;
}

vec2 operator*(const double& s, const vec2& v)
{
  return v * s;
}


vec2 operator+(const vec2& a, const vec2& b)
{
  return vec2(a[0]+b[0], a[1]+b[1]);
}

vec2 operator-(const vec2& a, const vec2& b)
{
  return vec2(a[0]-b[0], a[1]-b[1]);
}

vec2 vec2::operator-()
{
  return vec2(-m[0], -m[1]);
}
  

