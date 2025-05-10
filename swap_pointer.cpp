#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    int *c,*d;
    a=10;
    b=20;
    cout<<"Before swapping " << a << " "<< b<<endl;
    c=&a;
    d=&b;
    temp= *d;
    *d=*c;
    *c=temp;
    cout<<"After swapping "<<" "<<a<<" "<<b<<endl;
    

}