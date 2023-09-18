#include <iostream>
#include <vector>
using namespace std;
vector<string> turntovect(string str){
    vector<string> strings{};
    string temp;
    for (int i=0; i<str.length();i++){
        if (str[i] != ' ' || i == str.length()-1){
        temp += str[i];
        }
        if (str[i] == ' '|| i == str.length()-1){
            strings.push_back(temp);
            temp.clear();
        }
    }
    return strings;
}
std::string highestScoringWord(const std::string &str)
{
    vector<string> strings = turntovect(str);
    int count{};
    int max{0};
    string output;
    for (int i=0; i<strings.size();i++){
        count = 0;
        for (int j=0; j<strings[i].size();j++){
            count += strings[i][j];
            if (count > max){
                max = count;
                output = strings[i];
            }
            //cout << count<<endl;
        }
    }
    return output;
}
int main(){
    string str = "hello there peasents fuck thisaihdsa hh zzzzzzzzz";
    cout << highestScoringWord(str);
    return 0;
}