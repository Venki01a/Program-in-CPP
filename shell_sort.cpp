#include<iostream>
using namespace std;
void shellsort(int data[],int size){
    for(int gap=size/2;gap>0;gap/=2){
        for(int i=gap; i<size;i++){
            int temp=data[i];
            int j;
            for(j=i;j>=gap && data[j-gap]>temp;j-=gap){
                data[j]=data[j-gap];
            }
            data[j]=temp;
        }
    }
}

int main(){

    int data[]={8,6,7,2,1,4,5,3};
    int size=sizeof(data)/sizeof(data[0]);

    shellsort(data,size);
    cout<<"sorted output"<<endl;


    for (int i = 0; i < size; i++){
        cout<<data[i]<<" ";
    }
    cout<<endl; 
}