#include <iostream>

using std::cin;
using std::cout;

int main (){
    std::string foods[5];
    std::string food;
    std::string temp;
    cout << "what do you like eating?";
    for (int i = 0; i < 5; i++){
        cin >> food;
        temp = food;
        if (temp == "q"){
            break;
        }
        else{
            foods[i] = temp;
        }
    }
    cout << "you like eating :";
    for (int i = 0; !foods[i].empty(); i++){
        cout << '\n' << foods[i] ;
    }
   

}