//***************************************personal.h*********************************
//



#ifndef PERSONAL
#define PERSONAL 


#include <fstream>
#include <cstring>
#include <iostream>

using namespace std;



class Personal {
    public:
        Personal();
        Personal(const char*,const char*, const char* ,int ,long);
        void writeToFile(fstream&) const;
        void readFromFile(fstream&);
        void readKey();
        int size() const {
            return 9 + nameLen +cityLen + sizeof(year) + sizeof(salary);
        }
        bool operator==(const Personal& pr) const {
            return strncmp(pr.SSN,SSN,9) == 0;
        }


    protected:
        const int nameLen,cityLen;
        char SSN[10], *name , *city;
        int year;
        long salary;
        ostream& writeLegibly(ostream&);
        friend ostream& operator<<(ostream& out,Personal& pr){
            return pr.writeLegibly(out);
        }
        istream& readFromFileConsole(istream&);
        friend istream& operator>>(istream& in,Personal &pr){
            return pr.readFromFileConsole(in);
        }

};



#endif
