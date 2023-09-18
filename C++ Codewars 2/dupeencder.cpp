#include <iostream>
using namespace std;
#include <string>
std::string duplicate_encoder(const std::string& word){
    string output {};
    output.assign(word.length(),'(');
    for (int i=0; i<word.length(); i++){
        for (int j=0; j<word.length(); j++){
            if (tolower(word[i]) == tolower(word[j]) && i !=j){
                output[j] = ')';
            }
        }
    }
    return output;
}
int main(){
    string str = "Success";   // )())())
    cout << duplicate_encoder(str);
    return 0;
}