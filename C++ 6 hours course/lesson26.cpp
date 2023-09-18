#include <iostream>

using std::cout;
using std::cin;

void happibirthday(std::string Birthdayboi, int age);

int main(){
    std::string name;
    cout << "enter name";
    cin >> name;
    int age;
    cout << "enter age";
    cin >> age;
    happibirthday(name, age);
    return 0;
}
void happibirthday(std::string Birthdayboi, int age){
    cout << "happi birthday " << Birthdayboi << '\n';
    cout << "happi birthday " << Birthdayboi << '\n';
    cout << "happi birthday " << Birthdayboi << '\n';
    cout << "you are now " << age << " years old! \n";
}