#include <iostream>
using namespace std;

std::string disemvowel(const std::string& str) {
    string strcopy = str;
    string vowels = "aiueoAIUEO";
    int temp;
    for (int i = strcopy.length() -1; i >= 0; i--){
        for (int j = 0; j < 10; j++){
            if (str[i] == vowels[j]){
                strcopy.erase(i,1);
            }
        }
    }
    return strcopy;
}
int main(){

    string str = "my disappointment is immesurable and my day is ruined.";
    cout <<disemvowel(str);
    
    
    return 0;
}