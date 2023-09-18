#include <iostream>
#include <algorithm>
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
}

int main(){
    animals::Animals entity = animals::Animals(animals::dog);
    string names[]={"chicken","dog","cat","elephant","duck","snake"};
    int legs[]={2,4,4,4,2,0};
    cout << "the "<<names[entity]<< " has "<<legs[entity]<<" legs!"<<endl;
    std::sort(std::begin(legs),std::end(legs));
    for(int i = 0; i <= 5; i++){
        cout << legs[i];
    }
    return 0;
}