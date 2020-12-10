

//#include <iostream>


#include "Polymorphism.h"

int main(){

      Class1 object1,*p;
      Class2 object2;
      Class3 object3;


      p = &object1;
      p -> f();
      p -> g();

      p = ( Class1*) &object2;
      p -> f();
      p -> g();

      p = (Class1*) &object3;

      p -> f();  //possibly abnormal program termination
      p -> g();
      //p -> h();   //h() is not a member of Class1
      return 0;
}






















