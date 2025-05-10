#include<iostream>
using namespace std;
int getMax(int a[],int size){
    int max=a[0];
    for(int i=1;i<size;i++)
     {
        if(max<a[i]){
            max=a[i];
        }
     }
    return max;
}

int main()
{
    const int size=10;
    int arr[size];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<size;i++)
     {
        cin>>arr[i];
     }
    int max=getMax(arr,size);
    cout<<"The largest number is "<<max<<endl;
}

