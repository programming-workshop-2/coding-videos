#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  double pi = 3.14159;

  ofstream f("data", ios::binary);
  if (f.is_open())
  {
    f.seekp(16, ios::beg);
  
    f.write((char*)&pi, sizeof(double));
    f.close();
  }
  else
  {
    cerr << "Cannot open file." << endl;
  }

  //
  ifstream f2("data", ios::binary);
  if (f2.is_open())
  {
    double v;
  
    f2.read((char*)&v, sizeof(double));
    cout << v << endl;
    f.close();
  }
  else
  {
    cerr << "Cannot open file." << endl;
  }
  

  return 0;
}
