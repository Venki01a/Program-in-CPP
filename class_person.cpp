#include<iostream>
using namespace std;
class Person{
    public:
    bool Available;
    Person(bool a){
        cout<< "Base class constructor Called" <<endl;
        Available=a;
    }
};
class Surveyoperator:public Person{
    private:
    int NumberofCalls,NumberofSuccessfullCalls;
    double TotalTime;

    public:
    Surveyoperator(int nc,int nsc,double tt,bool a):Person(a){
        NumberofCalls=nc;
        NumberofSuccessfullCalls=nsc;
        TotalTime=tt;
    }
    int getNUmberofCalls(){
        return NumberofCalls;
    }
    int getNumberofSuccessfullCalls(){
        return NumberofSuccessfullCalls;
    }
    void setAvailable(bool a){
        Available=a;
    }
    void makecall(){
        cout<< "Call in Progress" << endl;
    }
    
};
int main(){
    Surveyoperator sol(5,3,2.3,true);
}