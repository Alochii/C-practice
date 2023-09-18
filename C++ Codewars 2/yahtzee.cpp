#include <iostream>
#include <vector>
using namespace std;
long yahtzee_upper(std::vector<int> arr) {
    long score{0};
    long runningtot{0};
    for (int i=0; i<arr.size(); i++){
        for (int j=0; j < arr.size(); j++){
            if (arr[i]==arr[j]){
                runningtot += arr[i];
            }
        }
        if (runningtot > score){
            score = runningtot;
        }
        runningtot = 0;
    }
    return score;
}
int main(){
    cout << yahtzee_upper({1,2,1,3,1,1});
    
    return 0;
}