#include <iostream>
using namespace std;

enum monNames{
    ogre,
    lizard,
    kittykat,
    mariomon,
    mystical_bunny,
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
        case monNames{kittykat}: return "kitty kat";
        case monNames{mariomon}: return "mariomon";
        case monNames{mystical_bunny}: return "mystical bunny";
        default : return "????";
    }
}
void printMonInfo(MonData monster){
    cout << "The " << returnName(monster.type) << " is named " << monster.name << " and has " << monster.health<<" health."<<endl;
}

int main(){
    printMonInfo({kittykat,"alochii",69});
    printMonInfo({mystical_bunny,"marshy",-42});
    return 0;
}