#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;
void checkline (std::array<int,9> line){
    std::array<int,9> correctseq = {1,2,3,4,5,6,7,8,9};
    std::array<int,9> temprow = {};
    for (int i = 0; i <9; i++){
        temprow[i] = line[i];
    }
    std::sort(temprow.begin(),temprow.end());
    for (int i = 0; i < 9; i++){
        cout << temprow[i];
    }
    cout << endl;
    for (int i = 0; i < 9; i++){
        cout << correctseq[i];
    }
    cout << endl;
    if (temprow == correctseq){
        cout << "equal"<<endl;
    }
    else {
        cout << "not equal"<<endl;
    }
}
bool validate(const std::array<std::array<int, 9>, 9>& board) {
    std::array<int,9> temprow = {};
    for (int i {0}; i < 1; i++){
        for (int j {0}; j< 9; j++){
            temprow[i] = board[i][j];
            checkline(temprow);
        }  
    }
    return true;
}

int main(){
    std::array<int,9> row = {1,2,3,4,5,6,7,8,9};
    std::array<std::array<int,9>,9> grid ={{
            {5,3,4,6,7,8,9,1,2},
            {6,7,2,1,9,5,3,4,8},
            {1,9,8,3,4,2,5,6,7},
            {8,5,9,7,6,1,4,2,3},
            {4,2,6,8,5,3,7,9,1},
            {7,1,3,9,2,4,8,5,6},
            {9,6,1,5,3,7,2,8,4},
            {2,8,7,4,1,9,6,3,5},
            {3,4,5,2,8,6,1,7,9}}};
    validate(grid);
    return 0;
}