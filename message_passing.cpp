#include<iostream>
using namespace std;
class Base{
    public:
    int x;
    Base(int _x){
        x=_x;
    }
};
class Derived : public Base{
    public:
    int a,b;
    Derived(int _a,int _b,int _c) : Base(_c){
        a=_a;b=_b;
    }
};

int main(){
    Derived d(2,3,4);
    cout<< "Output is:  "<< d.a<< " " <<d.b<< " " <<d.x;
}