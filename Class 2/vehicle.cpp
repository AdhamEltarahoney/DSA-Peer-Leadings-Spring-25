#include <iostream>
#include <string>
using namespace std;


class Vehicle{
    //1. constructor 2. print #setowner4 function allowing us to change owners
public:
    Vehicle();
    Vehicle(string owner, int year_old); //how old the vehicle is and the name of the owner
    virtual void print_info();
    void setOwner(string owner){ 
        this->owner = owner;
    }
protected:
    string owner;
    int year_old;
};


class Car : public Vehicle{
public:
    Car();
    Car(string owner, int year_old, string model, double miles_driven);

    virtual void print_info();
protected:
    string model;
    double miles_driven;
};

Vehicle :: Vehicle() : owner(""), year_old(-1){};

Vehicle :: Vehicle(string owr, int y_old) : owner(owr), year_old(y_old){};

Car :: Car() : Vehicle("", -1), model(""), miles_driven(-1) {}

Car :: Car(string owr, int y_old, string mdl, double m_driven): Vehicle(owr, y_old), model(mdl), miles_driven(m_driven){}

void Vehicle :: print_info(){
    cout << "This is a vehicle with owner named "<<owner<<" and it has "<<year_old<<" years on it"<< endl;
}

void Car :: print_info(){
    cout << "This is a Car with owner named "<<owner<<" and it has "<<year_old<<" years on it and it's a car model of "<< model<<" and it has been driven "<< miles_driven<<" miles"<< endl;

}

int main(){

    Vehicle v1("Bob", 3);
    v1.print_info();
    cout << endl;

    Car c1("Mike", 7, "audi", 100000);
    c1.print_info();
    cout << endl;

    // object pointers
    // instead of malloc we have new in c++
    Vehicle *v2 = new Vehicle;
    v2->print_info();
    cout<<endl;

    v2->setOwner("Frank");
    v2->print_info();
    cout<<endl;

    Car *c2 = new Car;
    c2->print_info();
    cout<<endl;
    c2->setOwner("Mark");
    c2->print_info();
    cout<<endl;
    delete c2;

    Car *c3 = new Car("Dan", 12, "Honda", 50329);
    c3->print_info();
    delete c3;

    return 0;
}


