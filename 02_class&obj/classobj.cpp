#include<iostream>
#include<string>
using namespace std;
class Emp{
    private:
    int eid;
    string ename;
    float esal;
    public:
    void accept(){
        cout<<"enter emp details:";
        cin>>eid>>ename>>esal;
    }
    void display(){
        cout<<"emp= "<<eid<<" "<<ename<<" "<<esal<<" ";
    }
};
int main(){
    Emp e1;
    e1.accept();
    e1.display();
    return 0;
}