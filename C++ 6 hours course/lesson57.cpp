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

        car(string x, string y, string year){
            maker=x;
            name=y;
            this->year=year;
        }
        void strings(){
            cout << maker <<'\n';   
            cout << name <<'\n';
            cout << year <<'\n';


        }

};
int main(){

    car car1("toyota", "corola", "2012");
    cout << car1.maker<<'\n';
    cout << car1.name<<'\n';
    cout << car1.year<<'\n';

    car car2("ford","focus","2008");
    car2.strings();


    return 0;
}