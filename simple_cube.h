#ifndef SIMPLE_CUBE_H
#define SIMPLE_CUBE_H
#include <iostream> 		

class SimpleCube{
  float _s, _d;  		
public: 
  SimpleCube (float s, float d) 	
  : _s {s}, _d{d}           {            	
      std::cout << "Creating SimpleCube\n"; 
  }
  ~SimpleCube() {                        	
      std::cout << "Destroying SimpleCube\n";
  }	
  float CalcMass() {		
      return _s*_s*_s*_d; 
   }
};
#endif //SIMPLE_CUBE_H

