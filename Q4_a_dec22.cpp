#include<iostream>
using namespace std;
class Student{
    private:
    int marks;
    public:
    Student(int marks){
        this->marks =marks;
    }
    bool ValidateExamMarks(){
        if(marks>=65 && marks<=100){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    Student s1(48);
    cout<<(s1.ValidateExamMarks()? "valid":"invalid")<<endl;
    Student s2(80);
    cout<<(s2.ValidateExamMarks()? "valid":"invalid")<<endl;
}