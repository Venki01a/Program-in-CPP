#include<iostream>
using namespace std;
class Test{
    public:
      void func(int x){
        cout<< "Value of x is: " << x <<endl;
      }
};

int main()
{
    Test obj1;
    obj1.func(7);
}