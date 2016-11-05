#ifndef SIMPLE_CYLINDER_H
#define SIMPLE_CYLINDER_H
#include <iostream> 		
constexpr double PI {3.1415};      

class SimpleCylinder {
  float _r, _h, _d;  		
public: 
  SimpleCylinder (float r, float h, float d) 	
  : _r {r}, _h {h}, _d {d}       {              
      std::cout << "Creating SimpleCylinder\n"; 
  }
  ~SimpleCylinder() {                        	
      std::cout << "Destroying SimpleCylinder\n";
  }
  float CalcMass() 	{	
      return PI*_r*_r*_h*_d; 
  }
};
#endif //SIMPLE_CYLINDER_H

