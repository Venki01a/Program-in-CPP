#include<iostream>
using namespace std;
class Complex{
    private:
    int real,imag;
    public:
     Complex(int r=0,int i=0){
        real=r;
        imag=i;
     }
     Complex operator +(Complex const &obj){
        Complex res;
        res.real=real + obj.real;
        res.imag=imag + obj.imag;
        return res;
     }
     void print(){
        cout << real << " + " << imag << "i"<<endl;
     }
};

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    Complex c1(a,b),c2(c,d);
    Complex c3= c1 + c2;
    c3.print();
}