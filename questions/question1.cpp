//Write a C++ program to calculate following series: (1) + (1+2) + (1+2+3) + (1+2+3+4) +(1+2+3+4+...+n).cpp
#include<iostream>
using namespace std;
int main(){
    cout<<"enter the limit of n:";
    int n;
    cin>>n;
    int total = 0;
    for(int i=1;i<=n;i++){
    int j=1;
    while(j<=i){
        total+=j;
        j++;
    }
}
cout<<"total="<<total;
    return 0;
}