#include <iostream>
using namespace std;
/*
std::string decodeMorse(std::string morseCode) {
    // ToDo: Accept dots, dashes and spaces, return human-readable message
    std::string decoded;
    for( auto p : morseCode ) {
      if( p == '.' )
        decoded += MORSE_CODE[ ".--" ];
      else if( p == '-' )
        decoded += MORSE_CODE[ "-" ];
    }
    return decoded;
}
*/

int main(){
    string str = "  e  ";
    string temp;
    string output;
    for (int i=0; i<str.length(); i++){
        if (str[i] != 's' || i == str.length()-1){
            temp += str[i];
        }
        else{
            output += temp;
            if (str[i+1] == 's' && str[i+2] == 's'){
                output += " ";
            }
            cout << temp<<endl;
            temp.clear();
        }
        if (i == str.length()-1){
            output += temp;
        }
    }
    cout <<output;
    return 0;
}