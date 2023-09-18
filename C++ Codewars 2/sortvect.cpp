#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    std::vector<int> nums = {1,2,3,4,1,2,3,1,2,7,2};
    std::sort (nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++){
        cout << nums[i];
        
    }
    return 0;
}