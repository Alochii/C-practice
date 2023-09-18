#include <iostream>
#include <cmath>
using namespace std;

struct Employee{
	string name{};
	int age{};
	int wage{};


};
int main(){
	Employee Jack;
	Jack.age = 23;
	Employee Alex;
	Alex.age = 27;
	cout << Jack.age << "and " << Alex.age;
	return 0;
}