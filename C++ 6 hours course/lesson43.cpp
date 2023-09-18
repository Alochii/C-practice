#include <iostream>

using std::cin;
using std::cout;

int main(){

    std::string fuck = "man i feel like a woman";
    int math = 5;
    double novalue;
    char bleh = 'c';
    std::string boiiii[]={"fuck me", "fuck you too"};
    double boiiisi[2];
    cout << &fuck << '\n';
    cout << &math << '\n';
    cout << &novalue << '\n';
    cout << &bleh << '\n';
    cout << &boiiii << '\n';
    cout << &boiiisi << '\n';

    return 0;
}