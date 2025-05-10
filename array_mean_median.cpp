#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,5,2,1,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<< "Mean is: " << mean(arr,size)<< endl;
    cout<< "median is: " << median(arr,size) << endl;
}