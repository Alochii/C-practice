#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
std::vector<int> sortArray(std::vector<int> array){
    vector<int> odds{};
    for (int i=0; i<array.size(); i++){
        if (array[i] % 2 != 0){
            odds.push_back(array[i]);
            array[i] = -1;
        }
    }
    sort(odds.begin(),odds.end());
    for (int i=0; i<array.size(); i++){
        if (array[i]==-1){
            array[i] = odds [0];
            odds.erase(odds.begin(),odds.begin()+1);
        }

    }
    return array;
}

int main(){
    vector<int> numbers  = {1,2,4,5,7,3,6}; // 1 2 4 3 5 7 6
    vector<int> numberss = sortArray(numbers);
    for (int i=0; i<numberss.size();i++){
        cout << numberss[i];
    }
    return 0;
}