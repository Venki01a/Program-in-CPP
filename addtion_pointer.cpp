#include<iostream>
using namespace std;
int main()
{
    int a,b,sum;
    int *c,*d;
    a=10;
    b=20;
    c=&a;
    d=&b;
    sum=*(c)+*(d);
    cout<<"Addition of a and b is "<<sum<<endl;
    

}