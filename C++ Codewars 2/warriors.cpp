#include <iostream>
#include <vector>
using namespace std;
std::string camelCaseSign(std::string text, std::string sign){
    int tempIndex{};
    while (text.find(sign) < text.length()){
        tempIndex = text.find(sign);
        text.erase(tempIndex,1);
        text[tempIndex] = toupper(text[tempIndex]);
    }
    return text;
}
std::string to_camel_case(std::string text) {
    
    return camelCaseSign(camelCaseSign(text, "-"), "_");
}
int main(){
    cout << to_camel_case ("warrior-Bever_fail");
    /*
    string str = "Whaod-swaw-ass";
    cout << str.find("-");
    int tempIndex{};
    while (str.find("-") < str.length()){
        tempIndex = str.find("-");
        str.erase(tempIndex,1);
        str[tempIndex] = toupper(str[tempIndex]);
    }
    cout <<str;
    */
    return 0;
}