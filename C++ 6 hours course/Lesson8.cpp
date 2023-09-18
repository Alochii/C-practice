#include <iostream>

using std::cout;
int main(){
    std::string name;
    int age;
    std::cout << "and how old are you?";
    std::cin >> age;
    std::cout << "what's your name young man?";
    std::getline(std::cin >> std::ws, name);
   
    std::cout << "your name is " <<name << " and you are " << age << " years old";


    return 0;
}