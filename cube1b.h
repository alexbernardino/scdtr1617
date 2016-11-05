#ifndef CUBE1B_H
#define CUBE1B_H
#include "solid1.h"
	
class Cube1b : public Solid1 {
  float _s;  		
public: 
  Cube1b (float s, float d) 	
  : _s {s},  Solid1{d}    { 
      cout << "Creating Cube1b" << endl; 
  }
 ~Cube1b() {     
      cout << "Destroying Cube1b" << endl;
  } 	
  float CalcMass(){return _s*_s*_s*_d; }
  bool operator==(Cube1b &c) {
    return _s==c._s && _d==c._d;
  }
  Cube1b& operator= (const Cube1b & c ) {
    if ( this == &c) return (*this) ;
    Solid1::operator=(c); 
    _s = c._s; 
    cout << "Cube1b assignment" << endl;
    return (*this); 
    }
  Cube1b(const Cube1b & c ) 
   : Solid1{c._d} //base class initialization
   {
     _s = c._s;
     cout << "Cube1b copy constructor" << endl;
   }
};
#endif //CUBE1B_H

