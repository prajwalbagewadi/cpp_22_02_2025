//Write C++ program to check whether number is palindrome ornot?
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num = 121;
    string temp = to_string(num);
    cout<<"temp="<<temp<<"\n";
    std::reverse(temp.begin(),temp.end());
    int num2 = stoi(temp);
    cout<<"num2="<<num2<<"\n";
    if(num==num2){
        cout<<num<<" "<<num2<<" are palindrome";
    }else{
        cout<<num<<" "<<num2<<" are not palindrome";
    }
    return 0;
}