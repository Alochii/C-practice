#include <iostream>

using std::cout;
using std::cin;
using std::string;;


class stove{
    private:
        int temprature = 0;
    public:
        int tempratureget(){
            return temprature;
        }
        void tempratureset(int temprature){
            if (temprature > 10){
                this->temprature = 10;
            }
            else if (temprature <0){
                this->temprature=0;
            }
            else{
            this->temprature=temprature;
            }
        }

};
int main(){
    stove stovetop;
    stovetop.tempratureset(100);
    cout << stovetop.tempratureget();

    return 0;
}