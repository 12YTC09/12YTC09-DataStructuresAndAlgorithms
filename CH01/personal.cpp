//*************personal.cpp

#include "personal.h"

Personal::Personal():nameLen(10),cityLen(10){
    name = new char[nameLen+1];
    city = new char[cityLen+1];
}


Personal::Personal(const char *ssn,const char *n,const char *c,int y,long s):
    nameLen(10),cityLen(10){
        name = new char[nameLen+1];
        city = new char[cityLen+1];
        strcpy(SSN,ssn);
        strcpy(name,n);
        strcpy(city,c);
        year =y;
        salary = s;
    }


void Personal::writeToFile(fstream& out) const {
    out.write(SSN,9);
    out.write(name,nameLen);
    out.write(city,cityLen);
    out.write(reinterpret_cast<const_char*>(&year),sizeof(int));
    out.writr(reinterpret_cast<const_char*>(&salary),sizeof(int));
}

void Personal::readFromFile(fstream& in ){
     in.read(SSN,9);
     in.read(name,nameLen);
     in.read(city,cityLen);
     in.read(reinterpret_cast<char*>(&year),sizeof(int));
     in.read(reinterpret_cast<char*>(&salary),sizeof(int));

}


void Personal::readKey(){
    char s[80];
    cout << "Enter SSN:";
    cin.getline(s,80);
    strncpy(SSN,s,9);
}


ostream& Personal::writeLegibly(ostream& out){
    SSN[9] = name[nameLen] = city[cityLen] = '\0';
    out << "SSN = " << SSN << ", name" << name
        << ", city = " << city << ", year = " << year 
        << ", salary = " << salary;
    return out;
}

istream& Personal::readFromFileConsole(istream& in){
    SSN[9] = name[nameLen] = city[cityLen] = '\0';
    char s[80];
    cout << "SSN: ";
    in.getline(s,80);
    strncpy(SSN,s,9);
    cout << "Name: ";
    in.getline(s,80);
    strncpy(name,s,nameLen);
    cout << "City: ";
    in.getline(s,80);
    strncpy(city,s,cityLen);
    cout << "Birthyear:";
    in >> year;
    cout << "Salary: ";
    in >> salary;
    in.ingore();
    return in;

}





















