# include<iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<< "Eat"<<endl;
    }
};

class Dog: public Animal{
    public:
    void speak(){
        cout<< "Bark"<<endl;
    }
};

class Baby_Dog: public Dog{
    public:
    void sleep(){
        cout<< "Sleeping"<<endl;
    }
};

int main()
{
  Animal a;
  Dog d;
  Baby_Dog bd;
  d.eat();
  bd.speak();
}