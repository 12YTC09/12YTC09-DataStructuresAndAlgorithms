
#ifndef CLASS_C_H
#define CLASS_C_H 

//#include <stdio>
//#include <string> 

#include <iostream>
#include <cstring>

using namespace std;


 class C{

public:
    C(const char *s = "",int i = 0,double d =1){
        strcpy(dataMember1,s);
        dataMember2 = i;
        dataMember3 = d;
    }
    void memberFunction1(){
        cout << dataMember1 << ' ' << dataMember2 << ' ' << dataMember3 << endl;
    }
    void memberFunction2(int i, const char *s = "unknown"){
        dataMember2 =i;
        cout << i << "received from "  << s << endl;

    }


protected:
    char dataMember1[20];
    int dataMember2;
    double dataMember3;

};


#endif
