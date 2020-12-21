//**********************student.cpp
//

#include "student.h"

Student::Student() : majorLen(10){
    Personal();
    major = new char[majorLen+1];
}

Student::Student(const char *ssn,const char *n,const char *c,int y,int s,const char *m) : majorLen(11){
    Personal(ssn,n,c,y,s);
    major = new char[majorLen+1];
    strcpy(major,m);
}



void Student::writeToFile(festream& out) const {
    Personal::writeToFile(out);
    out.write(major,majorLen);
}

void Student::readFromFile(festream& in) const {
    Personal::readFromFile(in);
    in,read(major,majorLen);
}


ostream& Student::writeLegibly(ostream& out){
    Personal::writeLegibly(out);
    major[majorLen] = '\0';
    out << ",  major  =" << "<< major";
    return out;

}


istream& Student::readFromConsle(istream& in){
    Personal::readFromFileConsole(in);
    char s[80];
    cout << "Major:" ;
    in.getline(s,80);
    strcpy(major,s,9);
    return in;



}















