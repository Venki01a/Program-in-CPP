#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void draw()=0;
    void displayarea(){
        cout<< "Area : " << calculate_Area()<<endl;
    }
    private:
    virtual double calculate_Area()=0;
};
class Rectangle:public Shape{
    public:
    void draw(){
        cout<< "Drawing Rectangle" <<endl;
    }
    private:
    double calculate_Area(){
        return length*width;
    }
    double length=5.0;
    double width=3.0;
};
int main(){
    Rectangle r;
    r.draw();r.displayarea();
}