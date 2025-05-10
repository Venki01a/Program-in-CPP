#include<iostream>
using namespace std;
int main()
{
    int a;
    double b;
    char c;
    float d;
    cout<< "Enter the integer: ";
    cin>>a;
    cout<< "Enter the double: ";
    cin>>b;
    cout<< "Enter the character: ";
    cin>>c;
    int size_integer=sizeof(a),size_double=sizeof(b),size_character=sizeof(c);
    cout<< "Size of an integer is" << size_integer << "bytes" <<endl;
    cout<< "Size of an double is" << size_double << "bytes" <<endl;
    cout<< "Size of an character is" << size_character << "bytes" <<endl;





}