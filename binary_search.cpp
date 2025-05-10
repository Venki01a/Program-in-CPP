#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,4,6,8,10};
    int n=5,mid,s=0,e=4,key=10;
    while(s<=e){
        mid=(s+e)/2;
        
        if(arr[mid]>key){
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else if (arr[mid]==key){
            cout<<mid;
            break;
        }
    }
}