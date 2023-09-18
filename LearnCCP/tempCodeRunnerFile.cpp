#include <iostream>
using namespace std;

enum monNames{
    ogre,
    lizard,
    kittykat,
    mariomon,
};
struct MonData{
    monNames type;
    string name;
    int health;
};
string returnName(monNames monster){
    switch (monster){
        case monNames{ogre}: return "ogre";
        case monNames{lizard}: return "lizard";
        default : return "????";
    }
    
}


int main(){
    cout << monNames{lizard}<<endl;
    MonData john {mariomon,"john",123};
    cout << john.type<<endl;
    cout << returnName(lizard);
    return 0;
}