#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string str = "The quick brown fox jumps over the lazy dog.";
    string temp;
    string output;
    char test;
    for (int i=0; i<str.size();i++){
        cout << str[i]<<endl;
        temp += str[i];
        cout << "temp" <<temp<<endl;
        if (str[i] == ' '){
            temp.pop_back();
        }
        if (str[i] == ' ' || i == str.size()-1){
            reverse(temp.begin(),temp.end());
            output.append(temp.substr(0,temp.size()));
            output.append(" ");
            temp.clear();
        }
    }
    output.pop_back();
    cout << output;
    return 0;
}