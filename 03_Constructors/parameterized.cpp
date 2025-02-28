#include<iostream>
#include<string>
using namespace std;

class MotorCycle{
    private:
    int year;
    string brand;
    string model;
    double price;
    double mileage;
    int weight;
    int tankCapacity;

    public:
    //constructor : is special type of function with the same name as class name 
    //used to initialize the data members of a class
    MotorCycle(string mod,double amt,double mile,int kg,int ltr){
        year=2025;
        brand="Royal Enfield";
        model=mod;
        price=amt;
        mileage=mile;
        weight=kg;
        tankCapacity=ltr;
    }

    void accept(){
       
    }

    void disp(){
        cout<<"brand:"<<brand<<"\n";
        cout<<"year:"<<year<<"\n";
        cout<<"model:"<<model<<"\n";
        cout<<"price:"<<price<<"\n";
        cout<<"mileage:"<<mileage<<"kmpl"<<"\n";
        cout<<"weight:"<<weight<<"kg"<<"\n";
        cout<<"tankCapacity:"<<tankCapacity<<"ltr"<<"\n";
    }
};



int main(){
    //constructor call
    MotorCycle m1(" Hunter 350",149900.00,36.00,177,13);
    m1.disp();

    return 0;
}