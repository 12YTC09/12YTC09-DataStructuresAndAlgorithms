
#ifndef Polymorphosm_H
#define Polymorphosm_H

#include <iostream>

using namespace std;



class Class1 {


    public:
            virtual void f(){
                cout << "Function f() in Class1\n";
            }
            void g(){
                cout << "Function g() in Class1\n"; 
            }
        
};


class Class2{
    public:
            virtual void f(){
                cout << "Function f() in Class2\n";
            }
            void g(){
                cout << "Function g() in Calsss2\n";
            }
};


class Class3{
    public:
            virtual void h(){
                cout << "Function h() in Class3\n";
            }
};


#endif 


















