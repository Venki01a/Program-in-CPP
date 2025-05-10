#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str1[50]="Strings in";
    char str2[]="CPP";
    strcat(str1,str2);
    cout<< "The string is: "<<str1;
}