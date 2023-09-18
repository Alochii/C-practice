#include <iostream>
using namespace std;

namespace animals{
enum Animals{
    chicken,
    dog,
    cat,
    elephant,
    duck,
    snake,
    number_of_animals,
};
std::string animalName(animals::Animals entity){
    switch (entity){
        case 0 : return "chicken";
        case 1 : return "dog";
        case 2 : return "cat";
        case 3 : return "elephant";
        case 4 : return "duck";
        case 5 : return "snake";
        default : return "???";
    }
}
}
void numOfLegs(animals::Animals entity){
    int feet[animals::Animals(animals::number_of_animals)]{2,4,4,4,2,0};
    cout << "the "<<animalName(entity)<< " has "<<feet[entity]<<" legs!";
}

int main(){
    animals::Animals entity = animals::Animals(animals::dog);
    int feet[animals::Animals(animals::number_of_animals)]{2,4,4,4,2,0};
    cout << "the "<<animalName(entity)<< " has "<<feet[entity]<<" legs!";
    return 0;
}