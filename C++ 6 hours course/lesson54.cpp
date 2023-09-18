#include <iostream>

using std::cout;
using std::cin;
using std::string;;



struct racers{
    string name;
    string car;
    string color;
};

void racerout(racers racer){
    cout << racer.name <<'\n';
    cout << racer.car<<'\n';
    cout << racer.color<<'\n';
}
void changecolor(racers &racer, string color){
    racer.color = color;
}

int main(){
    racers ali;
    ali.name = "ali";
    ali.car = "buggati";
    ali.color = "red";

    racers ben;
    ben.name = "ben";
    ben.car = "aston martin";
    ben.color = "midnight blue";
    changecolor (ali, "neon green");

    racerout (ali);

    return 0;
}