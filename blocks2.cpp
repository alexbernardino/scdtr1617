//blocks2.cpp
#include "cube2.h"
#include "cylinder2.h"
int main() {
   //implicit upcasting
   Solid2 *obj = new Cylinder2(2.0,1.0,0.9);
   //Cylinder2::CalcMass()
   float m1 = obj->CalcMass();
   //implicit upcasting
   obj = new Cube2(3.0,0.9);
   //Cylinder::CalcMass()
   float m2 = obj->CalcMass();
   float M = m1+m2;
   cout << "Total Mass= " << M << endl;
   delete obj;
}


