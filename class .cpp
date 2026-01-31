#include<iostream>
using namespace std;
class Car{
    public:
    int speed;
    string color;
    string name;
    Car(string name){
        this->name=name;
       
    }

    void increasespeed(){

    }
    void fly(){

    }

};

int main(){
    Car C1("ab");
    cout<<C1.name<<endl;

}
