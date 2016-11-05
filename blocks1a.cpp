#include "cube1a.h"

int main()
{
  Cube1a c1 {3.0, 0.9};
  Cube1a c2 {3.0, 0.9};
  Cube1a c3 {3.0, 1.0};
  cout << (c1==c1) << " " 
       << (c1==c2) << " " 
       << (c1==c3) << endl;
  cout << (c1&&c1) << " " 
       << (c1&&c2) << " " 
       << (c1&&c3) << endl;
}

