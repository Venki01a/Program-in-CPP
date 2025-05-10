#include<iostream>
using namespace std;
int reverse(int n,int rev,int rem){

    rem=n%10;
    rev=rev*10+rem;
    n=n/10;

    if(n>0){
        reverse(n,rev,rem);
    }
    else{
        return rev;
    }
}
int main(){
    int n,rev=0,rem=0;
    cout<<"Enter a no";
    cin>>n;
    int ans=reverse(n,rev,rem);
    cout<<ans;
}