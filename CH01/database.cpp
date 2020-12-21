//**************************database.cpp

#include <iostream>
#include "student.h"
#include "personal.h"
#include "database.h"



template<class T>
Database<T>::Database(){
}


template<class T>
void Database<T>::add(T& d){
    database.open(fName,ios::in|ios::out|ios::binary); //in , out ,二進位 
    database.seekp(0,ios::end);
    d.writeToFile(database);
    database.close();

}


template<class T>
void Database<T>::modify(const T& d){
    T tmp;
    database.open(fName,ios::in|ios::out|ios::binary);
    while()

}
