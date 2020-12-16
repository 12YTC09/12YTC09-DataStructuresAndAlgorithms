//***************************************personal.h*********************************
//



#ifndef PERSONAL
#define PERSONAL 


#include <fstream>
#include <cstring>

using namespace std;



class Personal {
    public:
        Personal();
        Personal(const char*, const char* ,int ,long);
        void writeToFile(fstream&) const;
        void readFromFile(festream&);
}
