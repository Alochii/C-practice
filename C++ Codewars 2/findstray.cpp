#include <iostream>
#include <vector>
using namespace std;
int stray(std::vector<int> numbers) {
    for (int i=0; i<numbers.size()-1;i++){
        if (numbers[i] != numbers[i+1]){
            if (i == 0 && numbers[i] != numbers[i+2]){
                return numbers[i];
            }
            else{
                return numbers[i+1];
            }
        }
    }
    return 0;
}
int main(){
    vector<int> nums = {1,1,1,1,1,1,1,1,2};
    cout <<stray(nums);
    return 0;
}