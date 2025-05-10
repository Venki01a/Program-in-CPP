#include<iostream>
using namespace std;
class Telephone{
    protected:
    string phonetype;
    public:
    Telephone(){
        phonetype="Analog";
    }
    virtual void ring(){
        cout<<"ringing the "<<phonetype<<endl;
    }
};
class ElectronicPhone:public Telephone{
    public:
        ElectronicPhone(){
        phonetype=" Digital";
    }
void ring(){
    cout<<"Ringing the"<<phonetype<<endl;
}
};
int main(){
    Telephone *t=new ElectronicPhone();
    t->ring();
}