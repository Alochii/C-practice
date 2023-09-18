#include <iostream>
using namespace std;
int main(){
    // numbers are <= 57
    string str = "92ab 69";
    string strhold;
    string temp;
    for (int i = 0; i <7; i++){
        if ((int)str[i] <= 57){
            temp = str[i];
            strhold.append(temp);

        }
    }
    cout << strhold;
    return 0;
}