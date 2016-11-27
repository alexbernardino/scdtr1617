//database.cpp
#include "cube2.h"
#include "cylinder2.h"
float TotalMass(Solid2 **);
int main() {
  Solid2 *svect[10];  
  svect [0] = new Cube2 {1.25,1.0};  
  svect [1] = new Cube2 {1.0,0.9};  
  svect [2] = new Cylinder2 {1,1,0.9};
  svect [3] = new Cylinder2 {0.5,2,1.0};  
  svect [4] = new Cube2 {1.25,1.0};  
  svect [5] = new Cylinder2 {1,2,0.8};  
  svect [6] = new Cylinder2 {1,0.5,0.7};  
  svect [7] = new Cylinder2 {3,2,1.1};  
  svect [8] = svect[9] = nullptr;  
  float tot = TotalMass(svect);   
  cout << "Total Mass: " << tot << endl;
  for(int i=0; svect[i] != nullptr; i++)         
    delete svect[i]; 
}

