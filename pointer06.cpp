#include<iostream>
using namespace std;
int main()
{
    int x=20,*y,*z;
    y=&x;
    z=y;
    *y++;
    *z++;
    x++;
    cout<< "Value of x,y,z is " << x << " " << " " << y << " " << z ;
    

}