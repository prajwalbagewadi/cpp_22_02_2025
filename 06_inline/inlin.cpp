#include<iostream>
#include<string>
using namespace std;


//inline : keyword use for function in aline used to make small low memory functions/procedures
inline int max(int a,int b){return a>b?a:b;}

int main(){
    //call
    int res = max(15,25);
    cout<<"res="<<res<<"\n";
    return 0;
}