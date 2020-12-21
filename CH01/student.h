//************************************student.h


#ifndef STUDENT
#define STUDENT

#include "personal.h"

class Student : public Personal {

    public:
        Student();
        Student(const char*,const char* ,int,long char*);
        void writeToFile(fstream&) const;
        void readFromFile(festream&);
        int size() const{
            return Personal::size() + majorLen;
        }
    protected:
        char *major;
        const int majorLen;
        ostream& writeLegibly(ostream&);
        friend ostream& operator<<(ostream& out,Student& sr){
            return sr.writeLegibly(out);
        }
        friend istream& operator>>(istream& in,Student& sr){
            return sr.readFromConsle(in);
        }
};

#endif




