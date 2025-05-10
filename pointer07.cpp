#include<iostream>
using namespace std;
void f(int *p,int *q)
{
    p=q;
    *p=2;
}








int i=0,j=1;
int main()
{
    f(&i,&j);
    cout<< "Value of i,j is  "<< i << " " << j;
    

}