#include<iostream>
//single level
#include<string>
using namespace std;

class A { //parent class
    public:
    int num;
    A(){
        num=10;
    }
    void dispA(){
        cout<<"num="<<num;
    }
};

class B : public A { //child class
    public:
    void dispB(){
        cout<<"num="<<num+10;
    }
};


int main(){
    B obj; //object for child class
    obj.dispA();
    obj.dispB();
    return 0;
}