#include<iostream>
using namespace std;
class Cars{
	public:
	int price;
	string name;
	string colour;
	void print(){
		cout<< "Car Name"<< name<< "has colour"<<
		colour << "and its price is"<< price<< endl;
	}
	
};


int main()
{
	Cars c1,c2,c3;
	c1.price= 100000;
	c1.name= "i20";
	c1.colour= "white";
	c2.price= 200000;
	c2.name= "verna";
	c2.colour= "silver";
	c3.price= 30000000;
	c3.name= "audi";
	c3.colour= "black";
	c1.print();
	c2.print();
	c3.print();
}
