#include<iostream>
using namespace std;
int divide(int num,int den){
    return num/den;
}
int main()
{
    int num,den;
    cout<<"Enter numerator";
    cin>>num;
    cout<<"Enter denominator";
    cin>>den;
    int result= divide(num,den);
    cout<<"Result:"<<result<<endl;
}