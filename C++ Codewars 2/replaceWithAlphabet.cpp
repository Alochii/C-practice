#include <iostream>
#include <string>
using namespace std;
string replace(string str){
    string letters = "abcdefghijklmnopqrstuvwxyz";
    string output{};
    for (int i=0; i < str.length(); i++){
        if (letters.find((char)tolower(str[i]))<letters.size()){
                output += to_string(letters.find((char)tolower(str[i]))+1) +" ";
        }
    }   
    output.erase(output.size(), 1);
    return output;
    }
int main(){
    string str = "Hello there general ken0b/";
    cout << replace(str);
    
    return 0;
}