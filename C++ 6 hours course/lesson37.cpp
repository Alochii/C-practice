#include <iostream>

using std::cin;
using std::cout;
int findnum(std::string numbers[], int size, std::string mynum){
    for (int i = 0 ; i < size ; i++){
        if (numbers[i] == mynum){
        return i;
        }
    }
return -1;
}

int main(){
    std::string dishes[] = {"sushi", "wasabi", "indoumi", "DDR", "misou-soup"};
    int index;
    int size = sizeof(dishes)/sizeof(dishes[0]);
    std::string food;
    cout << "input your dish\n";
    cin >> food;
    if (findnum(dishes, size, food) != -1) {
        cout << "there is " << food << " on the menu";
    }
    else{
        cout << " there is no " << food << " on the menu";
    }

    return 0;
}
