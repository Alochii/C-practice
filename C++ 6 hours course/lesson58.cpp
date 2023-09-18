#include <iostream>

using std::cout;
using std::cin;
using std::string;;


class car{
    public:
        string maker;
        string name;
        string year;
        string owner;

        car(string x, string y, string year){
            maker=x;
            name=y;
            this->year=year;
        }
        car(string x, string y, string year,string owner){
            maker=x;
            name=y;
            this->year=year;
            this->owner=owner;
        }
        void strings(){
            cout << maker <<'\n';   
            cout << name <<'\n';
            cout << year <<'\n';
            cout << owner<<'\n';


        }

};
int main(){

    car car1("toyota", "corola", "2012");
    cout << car1.maker<<'\n';
    cout << car1.name<<'\n';
    cout << car1.year<<'\n';

    car car2("ford","focus","2008","Mr zelensky");
    car2.strings();


    return 0;
}