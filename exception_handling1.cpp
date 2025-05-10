#include<iostream>
#include<stdexcept>
using namespace std;
int divide(int num,int den){
    if(den==0){
     throw runtime_error("Divide by zero exception");
    }
     return num/den;
}
int main()
{
    int num,den;
    cout<<"Enter numerator: ";
    cin>>num;
    cout<<"Enter denominator: ";
    cin>>den;
    try{
    int result= divide(num,den);
    cout<<"Result:"<<result<<endl;
    cout<<"Hello world";
    }
    catch(const exception &e){
        cout<<"Exception Caught: "<<e.what()<<endl;
    }
}