#include <iostream>

using std::cout;
using std::cin;
using std::string;;


class car{
    public:
        string maker;
        string name;
        string year;

        void accelerate(){
            cout << "ON THE GAS MUH BRUTHA"<<'\n';
        }
        void slow(){
            cout << "oh man. i almost rammed that cat\n";
        }
};
int main(){

    car car1;
    car1.maker = "ford";
    car1.name = "focus";
    car1.year = "2012";
    
    cout << car1.maker << '\n';
    cout << car1.name << '\n';
    cout << car1.year << '\n';

    car1.accelerate();
    car1.slow();


    return 0;
}