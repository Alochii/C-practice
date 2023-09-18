#include <iostream>
#include <vector>
using namespace std;
void digitize(unsigned long n) 
{        
  
}
int main(){
    int numint= 123455;
    std::vector<int> number{};
    for (int i = 0; i < 6; i++){
        number.push_back(i);
    }
     for (int i = 0; i < 5; i++){
        cout << number.at(2);
    }
    cout << endl;
    std::vector<int> numbers = {1,2,3,4,5};
    int num {0};
    for (int i = 0; i < numbers.size(); i++){
        num = numbers[4];
        numbers.insert(numbers.begin()+i, num);
        numbers.pop_back();
    }
    for (int i = 0; i < 5; i++){
        cout << numbers.at(i);
    }
    

}