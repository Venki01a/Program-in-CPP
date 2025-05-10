#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int demo[6]={5,14,3,10,2,1};
    int len =sizeof(demo)/sizeof(demo[0]);
    cout<<"before sorting array:";
    for(int i=0;i<len;i++){
        cout<<" "<<demo[i];
    }
    sort(demo,demo+len);
    cout<<"\n After sorting ArrAay in Asc order:";
    for(int i=0;i<len;i++){
        cout<<" "<<demo[i];
    }
        sort(demo,demo+len,greater<int>());
        cout<<"\n After sorting array in Desc order:";
    
        for(int i=0;i<len;i++){
            cout<<" "<<demo[i];
        }    
    
}