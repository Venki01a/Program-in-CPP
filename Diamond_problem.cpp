#include<iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"Eating"<<endl;
            }

};
class tiger:public Animal{
    public:
    void roar(){
        cout<<"roar"<<endl;
            }
    
};
class Lion:public Animal{
    public:
    void King(){
        cout<<"king of jungle"<<endl ;
           }
};
class liger:public tiger,public Lion{
    public:
    void runs(){
        cout<<"Runs";
    }
};
int main()
{
    Animal a;
    tiger t;
    Lion l;
    liger lg;
    l.eat();
    t.eat();
    lg.eat();
    lg.roar();
    lg.King();
}