#include<iostream>
using namespace std;
int factorial(int n,int fact,int i){
    if ( n == 0 || n == 1){
        return 1;
    }

 fact = fact*i;
 i++;
 if(i<=n){
    factorial(n,fact,i);
 }
 else{
 return fact;
 }
}
int main(){
 int n ;
 cin>>n;


 int ans = factorial(n,1,1);
 cout<<ans;

}