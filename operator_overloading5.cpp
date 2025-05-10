#include<iostream>
using namespace std;
class Count{
    private:
    int value;
    public:
    Count():value(5){}   //constructor to initialize count to 5
    void operator ++(){
        ++value;
    }
    void display(){
        cout<< "Count:" << value <<endl;
    }
};

int main()
{
Count c1;                                   
    ++c1;
    c1.display();
}