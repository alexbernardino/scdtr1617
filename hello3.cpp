//hello3.cpp

#include "hello3.h"
#include <iostream>
using namespace std;

void Hello3::set_id(int x)
{
   if(x>0) id = x;
   else    id = 1;
} 

void Hello3::run(int l, int c) {
   for(int i = 0; i < l; i++) {
      for(int j = 0; j < c; j++)
   	cout<<"Hello " << id << ", ";
      cout << endl;
   }
}

