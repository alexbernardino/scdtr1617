//totalmass.cpp

#include "solid2.h"
float TotalMass(Solid2 *sptr[]) 
{   
   float mass {0.0};   
   while( *sptr != nullptr )      
      mass += (*sptr++)->CalcMass();   return mass;
}

