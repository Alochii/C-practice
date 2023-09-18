#include <iostream>
#include <string>
using namespace std;
std::string alphabet_position(const std::string &text) {
    string stralp = "abcdefghijklmnopqrstuvwxyz";
    string output{};
    int cycletrack{0};
    for (int i=0; i<text.length(); i++){
        cout << "text i : " <<text[i]<< " , tolower text : "<<tolower(text[i])<<" , find : " << stralp.find(tolower(text[i]))<<" ,text size : "<< text.size()<<endl;
        if (stralp.find(tolower(text[i])) <stralp.size()){
            if (cycletrack != 0){
                output += " ";
            }
            output += to_string (stralp.find(tolower(text[i]))+1);
            cycletrack ++ ;
        }
    }
    return output;
}
int main(){
    string str = "aan";
    cout << alphabet_position(str);
    return 0;
}
