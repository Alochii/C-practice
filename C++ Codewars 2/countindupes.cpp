#include <iostream>
using namespace std;
int contindupes(string str){
    int output {0};
    int loopbreaker{};
    while(str.size()>0){
        for (int i=1; i<str.size();i++){
            if (tolower(str[i]) == tolower(str[0])){
                if (loopbreaker == 0){
                    output++;
                    loopbreaker++;
                }
                str.erase(i,1);
                i--;
            }
        }
        str.erase(0,1);
        loopbreaker = 0;
    }
    return output;
}

int main(){
    cout << contindupes("hello the eOsre");
    return 0;
}