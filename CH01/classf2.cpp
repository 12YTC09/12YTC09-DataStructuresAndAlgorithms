
#include <iostream>


using namespace std;

class classf2{

public:
    classf2(){}

    double run ( double x){
        return 2*x;
    }
};

double sum3(classf2 f,int n,int m){
    double result = 0;
    for(int i=n;i <= m;i++)
        result += f.run(i);
    return result;

}


int main()
{

    classf2 cf;
    cout << sum3(cf,2,5) << endl;

    cout << sum3(classf2(),2,5) << endl;

}





