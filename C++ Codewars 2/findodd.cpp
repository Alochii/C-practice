#include <vector>
#include <iostream>
using namespace std;
int findOdd(const std::vector<int>& numbers){
    int tracker;
    for (int i=0; i<(int)numbers.size(); i++){
        tracker=0;
        for (int j=0; j<(int)numbers.size();j++){
            numbers[i] == numbers[j]? tracker++ : tracker *=1;
        }
        if (tracker % 2 != 0){
            return numbers[i];
        }
    }
    return numbers[0];
}

int main(){
    cout << findOdd({1,2,1,2,1,2,1,2,3,3,3,3,3});
}