#include <iostream>
#include <cmath>
using namespace std;

struct Employee{
	string name{""};
	int age{0};
	int wage{0};


};
int main(){
	Employee Jack;
	Jack.age = 23;
	Employee Alex;
	Alex.age = 27;
	Employee Sam {"Sam", 15 ,21321};
	cout << Jack.age << "and " << Alex.age <<endl;
	cout << Jack.name;
	return 0;
}