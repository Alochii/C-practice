#include <iostream>
#include <vector>
using namespace std;
std::vector<int> deleteNth(std::vector<int> arr, int n){

}
int main(){
    int tracker{0};
    vector<int> nums = {1,2,2,3,4,1,1,1,2,2,3};
    for (int i=0; i<nums.size(); i++){
        tracker = 0;
        for (int j = i; j >= 0; j--){
            if (nums[i]==nums[j]){
                tracker++;
                if (tracker >= 1){
                    nums.erase(nums.begin()+j);
                    j--;
                }
            }
        }
    }
    for (int i=0; i<nums.size();i++){
        cout <<nums[i];
    }
    return 0;
}
