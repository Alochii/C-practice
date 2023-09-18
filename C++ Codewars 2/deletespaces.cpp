#include <iostream>
using namespace std;
int main(){
    string str = "   hel lossss";
    for (int i=0; str[i] == ' ';i++){
        if (str[i] == ' '){
            str.erase(str.begin()+i, str.begin()+i+1);
            i--;
        }
    }
    for (int i=str.length()-1; str[i] == 's';i--){
        if (str[i] == 's'){
            str.erase(str.begin()+i, str.begin()+i+1);
        }
    }
    cout <<str;
    return 0;
}