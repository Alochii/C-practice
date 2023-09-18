#include <iostream>
#include <vector>
using namespace std;
bool eyes(char symbol){
    if ((symbol == ':') || (symbol == ';')){
        return true;
    }
    return false;
}
bool smile(char symbol){
    if ((symbol == 'D') || (symbol == ')')){
        return true;
    }
    return false;
}
bool nose(char symbol){
    if ((symbol == '-') || (symbol == '~')){
        return true;
    }
    return false;
}
int countSmileys(std::vector<std::string> arr)
{
    int count{0};
    for (int i=0; i<arr.size(); i++){
        if (eyes(arr[i][0])){    
            if (smile(arr[i][1])){
                count++;
            }
            else if (nose(arr[i][1])){
                if (smile(arr[i][2])){
                    count++;
                }
            }
        }
    }
    return count;

}
int main(){
    vector<string> str={":D",";)","XD",":-D"};
    cout << countSmileys(str);
    
    
    return 0;
}