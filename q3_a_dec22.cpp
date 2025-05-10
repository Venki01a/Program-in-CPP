#include<iostream>
using namespace std;
int max(int a,int b){
    return a>=b?a:b;
}
double mX(double a,double b){
    return a>=b?a:b;
}
string max(string a,string b){
    return a.length()>=b.length()?a:b;
}
int main(){
    cout<<max("c++","c")<<endl;
    cout<<max(5,9)<<endl;
    cout<<max(5.8,9.1);
}