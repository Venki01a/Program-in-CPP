#include<iostream>
using namespace std;
class Test{
    public:
      void func(int x){
        cout<< "Value of integer x is: " << x <<endl;
      }
      void func(double x){
        cout<< "Value of double x is: " << x <<endl;
      }
      void func(int x,double y){
        cout<< "Value of integer x and double y is: " << x << ','<< y <<endl;
      }
      
};

int main()
{
    Test obj1;
    obj1.func(7);
    obj1.func(7.5);
    obj1.func(7,7.5);
}