#ifndef CYLINDER1_H
#define CYLINDER1_H
#include "solid1.h"
constexpr double PI {3.1415};      
class Cylinder1 : public Solid1 {
    float _r, _h;  		
public: 
  Cylinder1 (float r, float h, float d)  
  : _r {r}, _h {h}, Solid1 {d}   { 
     cout<<"Creating Cylinder1"<<endl; 
  }
 ~Cylinder1() {                      
      cout <<"Destroying Cylinder1"<<endl;
  }
  float CalcMass(){return PI*_r*_r*_h*_d;}
};
#endif //CYLINDER1_H

