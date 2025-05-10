#include<iostream>
using namespace std;
int main()
{
    int i=6,*j,k;
    j=&i;
    k=i* *j *i +*j;
    cout<< "Value of i is "<< k<<endl;
    

}