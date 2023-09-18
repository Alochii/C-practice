#include <iostream>

using std::cout;
using std::cin;
using std::string;;
enum fruit{bananas,balls,nachos,pumpkins};

int main(){
    fruit test = bananas;

    switch (test){
        case 0 : cout << "bananas are good muh man";
        break;
        case 1 : cout << "balls are good muh man";
        break;
        case 2 : cout << "nachos are bad muh man";
        break;
        case 3 : cout << "pumpkins are good muh man";
        break;
    }



    return 0;
}