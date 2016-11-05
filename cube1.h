#ifndef CUBE1_H
#define CUBE1_H
#include "solid1.h"
	
class Cube1 : public Solid1 {
  float _s;  		
public: 
  Cube1 (float s, float d) 	
  : _s {s},  Solid1{d}    { 
      cout << "Creating Cube1" << endl; 
  }
 ~Cube1() {     
      cout << "Destroying Cube1" << endl;
  } 	
  float CalcMass(){return _s*_s*_s*_d; }
};
#endif //CUBE1_H

