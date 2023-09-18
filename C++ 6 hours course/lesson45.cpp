#include <iostream>

using std::cout;
using std::cin;
using std::string;
void displaydata(const string name, const int age){
    cout << "my name is " << name <<" and i'm "<< age << " years old \n";

}

int main(){
    string name = "ali";
    int age = 23;
    cout << "my name is " << name <<" and i'm "<< age << " years old \n";
    name = "megumin";
    age = 19;
    cout << "my name is " << name <<" and i'm "<< age << " years old\n";
    displaydata(name ,age);






    return 0;
}