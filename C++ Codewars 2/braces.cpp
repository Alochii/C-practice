#include <iostream>
using namespace std;
bool validbraces(string str){
    int trackpar = 0;
    for (int i=0; i< str.length(); i++){
        if (str[i] == '('){
            trackpar ++;
        }
        else if (str[i] == ')'){
            trackpar --;
        }
        if (trackpar < 0){
            return false;
        }
    }
    return trackpar == 0? true : false;
}
int main(){
    string str = "()(()))";
    cout << validbraces(str);
    
    return 0;
}