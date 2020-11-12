#include "Inheritance.h"

#include <iostream>


int main(){
    BaseClass bc;
    Derived1Level1 d1l1;
    Derived2Level1 d2l1;
    DerivedLevel2  dl2;
    bc.f("main(1)");
   
    //bc.g();  //error
    //bc.h();  //error

    d1l1.f("main(2)");

    //d1l1.g();  //error
    d1l1.h("main(3)");
    
    d2l1.f("main(4)");

    dl2.f("main(5)");

    dl2.h();



   return 0;

}




