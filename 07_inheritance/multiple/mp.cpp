#include<iostream>
//single level
#include<string>
using namespace std;

class A { //parent class
    public:
    void add(int num){
        cout<<"num="<<num+10;
    }
};

class B { //child class
    public:
    void sub(int num){
        cout<<"num="<<num-10;
    }
};

class C : public A,public B{ // child class inherting both parents A & B 
    public:
    void multi(int num){
        cout<<"num="<<num*10;
    }
};

int main(){
    C obj; //object for child class
    obj.add(10);
    obj.sub(10);
    obj.multi(10);
    return 0;
}