#include <iostream>
#include <vector>
using namespace std;

std::vector<std::string> solution(const std::string &s){
    string str = s;
    string temp{};
    vector<string> twos{};
    for (int i=0; i< str.length();i++){
        temp += str[i];
        if ((i == str.length()-1) && (i % 2 == 0)){
            temp += '_';
            twos.push_back(temp);
        }
        if (i % 2 != 0){
            twos.push_back(temp);
            temp.clear();
        }
    }
    return twos;

}
int main(){
    string str = "abcdefg";
    vector<string> strr = solution(str);
    for (int i=0; i<strr.size();i++){
        cout << strr[i]<<endl;
    }
    return 0;
}