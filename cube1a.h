#ifndef CUBE1A_H
#define CUBE1A_H
#include "solid1.h"
	
class Cube1a : public Solid1 {
  float _s;  		
public: 
  Cube1a (float s, float d) 	
  : _s {s},  Solid1{d}    { 
      cout << "Creating Cube1" << endl; 
  }
 ~Cube1a() {     
      cout << "Destroying Cube1" << endl;
  } 	
  float CalcMass(){return _s*_s*_s*_d; }
  bool operator==(Cube1a &c) {
    return _s==c._s && _d==c._d;
  }
  bool operator&&(Cube1a &c) {
     return this == &c;
  }
};
#endif //CUBE1A_H

