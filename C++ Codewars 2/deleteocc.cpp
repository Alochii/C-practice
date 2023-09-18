#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums  {1,3,2,1,2,3,3,2};
    vector<int> nums2;
    int repeats{1};
    int tracker{0};
    for (int i=0; i<nums.size();i++){
        //cout << nums[i]<<endl;
        tracker = 0;
        for (int j=0; j<nums.size(); j++){
            if ((nums[i] == nums[j]) && (i != j)){
                if (tracker >= repeats-1){
                    //cout << "delete" << j <<endl;
                    nums.erase(nums.begin()+j);
                    j--;
                }
                tracker ++;
            }
        }
    }
    for (int i=0; i<nums.size();i++){
        cout << nums[i];
    }
    return 0;
}