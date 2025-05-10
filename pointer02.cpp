#include<iostream>
using namespace std;
int main()
{
    int c;
    int *p;
    cout<<"Enter the value of c: "<<endl;
    cin>>c;
    *p=c;
    cout<<"Address of c"<<&c<<endl;

}