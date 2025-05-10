 #include<iostream>
using namespace std;
class MyClass{
    public:
    MyClass(int id):objectId(id){
        cout<<"Object-"<<objectId<<"created!"<<endl;
    }
    ~MyClass(){
        cout<<"Object-"<<objectId<<"destroyed!"<<endl;
    }
    private:
        int objectId;
};
int main(){
    MyClass obj1(1);
    MyClass xyz(2);
    MyClass obj3(3);
}