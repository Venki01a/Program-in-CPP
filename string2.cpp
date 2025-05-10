#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str1[50]="C++";
    char str2[]= "Strings";
    strcat(str1,str2);
    cout<<str1<<endl;
}