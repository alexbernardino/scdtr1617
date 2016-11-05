#include <iostream>
using namespace std;
#include <square.h>

void print_square(double x)
{
   cout << "The square of " << x << " is ";
   cout << square(x) << endl;
}

int main()
{
   print_square(1.234);
}
