#include<iostream>
using namespace std;
class Base{
    public:
     virtual void print(){
       cout<<"Function called";
     }
};

class Derived : public Base{
    public:
    void print(){
        cout<< " Virtual function exists";
    }
};

int main()
{
    Derived d;
    Base *base1=&d;
    base1->print();

}