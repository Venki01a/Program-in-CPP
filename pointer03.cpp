#include<iostream>
using namespace std;
int main()
{
    int a,*b;
    a=10;
    b=&a;
    cout<<"Address of a "<< *b<<endl;
    cout<<*&a;

}