#include <iostream>
#include <ostream>
#include <string>
using namespace std;


class Point{
//private, protected, public
private:
    int x;
    int y;
public:
    Point(); //default constructor

    Point(int x, int y);//  this is a parametarized constructor

    //getters and setter
    int getx(){ return x; }
    int gety(){ return y; }

    //setter functions
    void setx(int x){ this->x = x; }
    void sety(int y){ this->y = y; };

    void print();
};

// now I want to define my default constructor
Point::Point(){
    x = 0;
    y = 0;
}

//parametarized constructor definition
Point::Point(int x, int y){
    this->x = x;
    this->y = y;
}

void Point::print(){
    cout << "X = "<< x << " Y = " << y<< endl;

}


//create a function that compares 2 points and returns True if they aree the same
//operator overloading for ==
bool operator==(Point p1, Point p2){
    if (p1.getx() == p2.getx() && p1.gety() == p2.gety()){
        return true;
    }
    else{
        return false;
    }
}



int main(){
    Point p1;
    p1.print();
    p1.setx(3); //now x should be equal to 3
    p1.sety(5); // now y should be equal to 5
    cout<<"Points after modifications"<<endl;
    p1.print();
    //now we are talking about p2
    cout<<"P2 stuff"<<endl;

    Point p2(8, 9);
    p2.print();

    cout<<"Modifying p1 to be equal to p2"<<endl;
    p1.setx(100);
    p1.sety(9);
    p1.print();

    if (p1 == p2){
        cout<<"They are equal"<<endl;
    }
    else{
        cout<<"Not equal"<<endl;
    }

    return 0;
}










