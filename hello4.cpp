//hello4.cpp

#include "hello4.h"
#include <iostream>
using namespace std;

void Hello4::set_id(int x)
{
   if(x>0) id = x;
   else    id = 1;
} 

void Hello4::run(int l, int c) {
   for(int i = 0; i < l; i++) {
      for(int j = 0; j < c; j++)
   	cout<<"Hello " << id << ", ";
      cout << endl;
   }
}

Hello4::Hello4() 
{
   cout << "Ctor " << endl;
}


Hello4::~Hello4() 
{
   cout << "Dtor " << endl;
}
