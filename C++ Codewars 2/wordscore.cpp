#include <iostream>
#include <vector>
using namespace std;
int main(){
    string str = "aa bb cc e";
    vector<string> strings{};
    string output;
    for (int i=0; i<str.length();i++){
        if (str[i] != ' '){
            output += str[i];
        }
        if (str[i] == ' ' || i == str.length()){
            strings.push_back(output);
        }
    }
    for (int i=0; i<strings.size();i++){
        cout << strings[i]<<endl;
    }
    return 0;

}