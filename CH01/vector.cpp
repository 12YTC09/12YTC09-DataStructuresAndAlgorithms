#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>   //greater<t>



using namespace std;



template<class T>
void printVector(const char *s ,const vector<T> &v){
    cout << s << " =( ";
    if (v.size() == 0){
        cout << ")\n";
        return;
    }
    typename vector<T>::const_iterator i = v.begin();
    for(; i != v.end()-1;i++)
        cout << *i << ' ';
    cout << *i << ")\n";
}



bool f1(int n){

    return n<4;

}


int main(){
    int a[] = {1,2,3,4,5};
    vector<int> v1;        //v1 is empty,size = 0,capacity = 0
    printVector("v1",v1);
    for(int j =1;j<=5;j++)
        v1.push_back(j);   //v1 = (1 2 3 4 5),size = 5,capacity = 8
    cout << v1[0] << endl;
    
    vector<int> v2(3,7);   //v2 = (7,7,7)
    
    cout << v2[0] << endl;
    
    vector<int>::iterator i1 = v1.begin()+1;

    cout << i1[0]<<endl;

    vector<int> v3(i1,i1+2);   //v3 = (2 3),size =2 ,capacity = 2
    vector<int> v4(v1);        //v4 = (1 2 3 4 5),size = 5,capacity = 5












}



















