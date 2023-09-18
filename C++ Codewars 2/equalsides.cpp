#include <iostream>
#include <array>
using namespace std;
int equalsides(std::array<int,8> arr){
    int leftside{0};
    int rightside{0};
    int sum{0};
    for (int i=0; i<=arr.size(); i++){
        leftside = 0;
        rightside = 0;
        //cout <<"J : ";
        if (i >0){
            for (int j=i-1; j>= 0; j--){
                leftside+= arr[j];
                //cout << j;
            }
        //cout << endl;
        //cout <<"k : ";
        }
        if (i <7){
            for (int k= i+1; k <= arr.size()-1; k++){
                //cout << k;
                rightside += arr[k];
            }
        }
        //cout << endl;
        if (rightside == leftside){
            //cout << "the number is :"<<i<<endl;
            return i;
            break;
        }
        //cout <<"left side : "<<leftside <<", right side : "<<rightside<<endl;
    }
    return -1;
}
int main(){
    cout << equalsides({1,2,3,4,3,2,1,1});
    return 0;
}