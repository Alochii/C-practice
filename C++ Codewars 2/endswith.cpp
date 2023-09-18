#include <iostream>
#include <string>
using namespace std;
bool solution(std::string const &str, std::string const &ending) {
    string compare{};
    compare = str.substr(str.size()-ending.size(),str.size());
    return (compare == ending? true : false);
}
int main(){
    string str1 = "abc";
    string str2 = "";
    cout << solution(str1,str2);
    
    return 0;
}