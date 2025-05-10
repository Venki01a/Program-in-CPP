#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void draw()=0;//pure virtual function
};
class circle:public Shape{
    public:
    void draw(){
        cout<< "Circle is a shape" <<endl;
    }
};

int main()
{
  Shape *c=new circle();
  c->draw(); 
}