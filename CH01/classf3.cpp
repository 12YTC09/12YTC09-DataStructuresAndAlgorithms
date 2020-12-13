
#include <iostream>




//using namespace std;

template<class T>
struct negate : public unary_function<T,T> {
    T operator()(const T&x) const{
    return -x;
    }
};


/* 
class classf{

public:
    classf(){}
    double operator()( double x){
        return 2*x;
    }
};
*/


template<class F>
double sum(F f,int n,int m){
    double result = 0;
    for(int i=n;i <= m;i++)
        result += f(i);
    return result;

} 


int main()
{ 


    std::cout <<   sum(negate<double>(),2,5) << std::endl;



} 





