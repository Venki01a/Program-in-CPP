#include<iostream>
#define PI 3.1416
using namespace std;
float area(float radius){
    float area=PI*radius*radius;
    return area;
}

float area(int length,int breadth){
    return length*breadth;
}

float area(float base,float height){
    return 0.5*base*height;
}

int main()
{
    // Dimensions of a circle
    float radius;
    cout<<"Enter the radius of circle: "<<endl;
    cin>>radius;
    // Dimensions of a rectangle
    int length,breadth;
    cout<<"Enter the length and breadth of the rectangle: "<<endl;
    cin>>length>>breadth;
    // Dimensions of a triangle
    float base,height;
    cout<<"Enter the base and height of the triangle: "<<endl;
    cin>>base>>height;
    cout<<"Area of circle: "<<area(radius)<<endl;
    cout<<"Area of rectangle: "<<area(length,breadth)<<endl;
    cout<<"Area of triangle: "<<area(base,height)<<endl;
}