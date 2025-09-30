Yashvesh Singh 24070123138
#include<iostream>
#include<string>
using namespace std;

class Vegetable {
    public:
    string type[3]= {"Tomato", "Carrot", "Potato"};
    void supplier(){
        cout<<"Fresh Farms Ltd."<<endl;
    }
};

class Tomato: public Vegetable {
    public:
    string color="Red";
};

class Carrot: public Vegetable{
    public:
    string color="Orange";
};

class Potato: public Vegetable {
    public:
    string color="Brown";
};

int main(){
    Tomato f1;
    cout<<endl;
    f1.supplier();
    cout<<f1.type[0]<<": "<<f1.color<<endl;

     Carrot f2;
    cout<<endl;
    f2.supplier();
    cout<<f2.type[1]<<": "<<f2.color<<endl;

    Potato f3;
    cout<<endl;
    f3.supplier();
    cout<<f3.type[2]<<": "<<f3.color<<endl;
}
Output:

Fresh Farms Ltd.
Tomato: Red

Fresh Farms Ltd.
Carrot: Orange

Fresh Farms Ltd.
Potato: Brown
