#include <iostream>
using namespace std;
bool XorO (string str){
    int trackX{0};
    int trackO{0};
    for (int i = 0 ; i < str.length(); i++){
        if (tolower(str[i])== 'x'){
            trackX ++;
        }
        if (tolower(str[i])== 'o'){
            trackO ++;
        }
    }
    if (trackX == trackO){
        return true;
    }
    else {
        return false;
    }
}
int main(){
    cout << XorO("ooxXm");
    return 0;
}