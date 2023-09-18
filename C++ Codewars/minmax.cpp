#include <iostream>

using namespace std;
int main(){
    string nums = "8 3 -5 42 -1 0 0 -9 4 7 4 -4";
    int min = nums[0], max=nums[0];
    cout << "min = " << min << endl;
    cout << "max = " << max << endl;

    for (int i = nums.length()-1; i>=0; i-=2){
        cout << "i = " << i << endl;
        min > nums[i] ? min = nums[i] : min=min;
        cout << "min = " << min << endl;
        max < nums[i] ? max = nums[i] : max=max;
        cout << "max = " << max << endl;
    }
    string ret = "";
    ret.push_back(max);
    ret.push_back(' ');
    ret.push_back(min);
    cout << ret;
    return 0;
}