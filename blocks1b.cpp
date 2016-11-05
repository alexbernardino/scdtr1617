#include "cube1b.h"

Cube1b func(Cube1b c)
{
   return Cube1b {c};
}

int main()
{
  Cube1b c1 {1.0,1.0};
  Cube1b c2 {c1};
  Cube1b c3 = c1;
  c3 = c2;
  Cube1b c4 = func(c1);
}

