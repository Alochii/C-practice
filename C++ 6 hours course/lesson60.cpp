#include <iostream>

using std::cout;
using std::cin;
using std::string;;


class animal{
    public:
        bool alive = true;
};

class dog : public animal{
    public:
        void bark(){
            cout << "woof woof woof";
        }
};
class cat : public animal{
    public:
        void meow(){
            cout << "mew <3";
        }

};
int main(){
    dog woofy;
    cout << woofy.alive;
    woofy.bark();
    cat kitty;
    cout << kitty.alive;
    kitty.meow();
    return 0;
}