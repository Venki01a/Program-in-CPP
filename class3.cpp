#include<iostream>
using namespace std;
class Cars{
	public:
	int price;
	string name;
	string colour;
	Cars(int p, string n, string c){
		price=p;name=n;colour=c;
	}
	void print(){
		cout<< "Car Name "<< name << " has colour "<<
		colour << " and its price is "<< price << endl;
	}
	
};


int main()
{
	Cars c1(100000,"i20","white");
	Cars c2(2000000,"verna","black");
    Cars c3(3000000,"audi","silver");
	c1.print();
	c2.print();
	c3.print();
}
