#include <iostream>
#include <string>
using namespace std;
template <typename T>
class BasicVector {
public:
    BasicVector(int capac = 10);
    T &operator[](int index){return a[index];} // returning a reference of type T
    T getval(int pos) { return a[pos];}
private:
    int capacity;
    T *a;
};

// define the constructor
template <typename T>
BasicVector<T> :: BasicVector(int capac){
    capacity = capac;
    a = new T[capacity]; //if we say capacity = 10 then we allocate an array of size 40
}


int main(){
    BasicVector<int> intVec(20);
    intVec[1] = 12;
    cout << "The first indexed element is: "<< intVec.getval(1) << endl;

    BasicVector<double> dubv(5);
    dubv[3] = 7;
    cout << "The first indexed element is: "<< dubv.getval(3) << endl;
}