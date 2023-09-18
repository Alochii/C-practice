#include <string>
#include <vector>
#include <iostream>
using namespace std;

int getCount(const string& inputStr){
  int num_vowels = 0;
  std::vector <char> vect{'a','i','u','e','o'};
  char a = 'a';
  for (int i = 0; i < inputStr.length(); i++){
    for (int j =0; j<5 ; j++){
          if ((inputStr[i]) == vect[j]){
            num_vowels ++;
            break;
    }
    }
  }
  return num_vowels;
}
int main(){
    cout << getCount("fuck you");
    return 0;
}