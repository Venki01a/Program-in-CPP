#include<iostream>
using namespace std;
class Base{
    protected:
    int protected_data;
    public:
    void setProtectedData(int data){
        protected_data=data;
    }
    void displayprotecteddata(){
        cout<<"Protected Data: "<<protected_data<<endl;
    }
};
class Derived:public Base{
    public:
    void modifyprotecteddata(int newdata){
        protected_data=newdata;
    }
};

int main()
{
    Derived derivedObj;
    derivedObj.setProtectedData(10);

    derivedObj.displayprotecteddata();
    derivedObj.modifyprotecteddata(20);
    derivedObj.displayprotecteddata();
}