//hello6.cpp

#include "hello6.h"
#include <iostream>
using namespace std;
int Hello6::obj_count = 0;

void Hello6::run(int l, int c) {
   for(int i = 0; i < l; i++) {
      for(int j = 0; j < c; j++)
   	cout<<"Hello " << id << ", ";
      cout << endl;
   }
}

Hello6::Hello6(int v) : id{v}  
{
   if(id<=0) id = 1;
   obj_count++;
   cout << "Ctor " << endl;
}


Hello6::~Hello6() 
{
   obj_count--;
   cout << "Dtor " << endl;
}
