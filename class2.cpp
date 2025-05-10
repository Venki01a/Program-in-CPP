#include<iostream>
using namespace std;
class Cars{
	public:
	int price;
	string name;
	string colour;
	void insert(int p, string n, string c){
		price=p;name=n;colour=c;
	}
	void print(){
		cout<< "Car Name "<< name << " has colour "<<
		colour << " and its price is "<< price << endl;
	}
	
};


int main()
{
	Cars c1,c2,c3;
	c1.insert(100000,"i20","white");
	c2.insert(2000000,"verna","black");
    c3.insert(3000000,"audi","silver");
	c1.print();
	c2.print();
	c3.print();
}
