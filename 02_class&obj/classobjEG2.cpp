#include<iostream>
#include<string>
using namespace std;
class Book{
    private:
    
    public:
    string bname;
    string bauthor;
    string bcategory;
    double bprice;
    int bpages;
    void accept(){
        cout<<"enter book details:";
        cout<<"book:name author category price pages:";
        cin>>bname>>bauthor>>bcategory>>bprice>>bpages;
    }
    void display(){
        cout<<"bookname="<<bname<<"\n"<<"bookauthor="<<bauthor<<"\n"<<"bookcategory="<<bcategory<<"\n"<<"bookprice="<<bprice<<"\n"<<"bookpages="<<bpages<<"\n";
    }
};
int main(){
    Book b1,b2;
    b1.bname="Harry Potter and the Philosopher's Stone";
    b1.bauthor="J.K. Rowling";
    b1.bcategory="Action & Adventure";
    b1.bprice=313.00;
    b1.bpages=345;
    b1.display();
    
    b2.accept();
    b2.display();
    return 0;
}