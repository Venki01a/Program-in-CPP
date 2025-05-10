#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str1="Strings in ";
    string str2="CPP";
    str1.append(str2);
    cout<< "The string is: "<<str1;
}