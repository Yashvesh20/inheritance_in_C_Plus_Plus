Yashvesh Singh 24070123138
#include<iostream>
#include<string>
using namespace std;

class Vehicle {
    public:
    string company="BMW";
    void type(){
        cout<<"S10"<<endl;
    }
};
class Specs {
    public:
    string mileage="20 kmpl";
    void colour(){
        cout<<"Black"<<endl;
    }
};
class Car: public Vehicle, public Specs {
    public:
    string seater="4 seater";
};

int main(){
    Car f2;
    f2.colour();
    cout<<f2.company<<" ";
    f2.type();
    cout<<"("<<f2.seater<<")"<<endl<<"MILEAGE: "<<f2.mileage<<endl;
}
Output:
Black
BMW S10
(4 seater)
MILEAGE: 20 kmpl
