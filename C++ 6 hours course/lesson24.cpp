#include <iostream>

using std::cout;
using std::cin;
int main(){
    srand(time(0));
    int null = ((rand())% 4) + 1 ;
    switch (null){
        case 1 : cout << "you win alochii's nudies!";
        break;
         case 2 : cout << "you win a cucumber";
        break;
         case 3 : cout << "you win some chips";
        break;
         case 4 : cout << "you win a ticket to mars";
        break;
    }

    return 0;
}