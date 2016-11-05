#ifndef SOLID1_H
#define SOLID1_H
#include <iostream>
using namespace std;

class Solid1 {
protected: 
  float _d; 	
public:
  Solid1( float d )  : _d {d}  {
      cout << "Creating Solid1" << endl;
  }
  ~Solid1()  {
     cout << "Destroying Solid1" << endl;
  }
};
#endif // SOLID1_H

